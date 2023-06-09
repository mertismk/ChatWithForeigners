#include "singletondb.h"


QString SingletonDB::sendQuery(QString strQuery)
{
   // Выполняем SQL-запрос
    this->getInstance();
    QSqlQuery query(m_database);
    query.exec(strQuery);

    int num_of_cols = query.record().count();
    QString res = "";
    while(query.next()){
        for(int i=0;i<num_of_cols;i++)
        {
            res.append(query.value(i).toString()).append("&");
        }
        res.append("\n");
    }

    return res;
}


SingletonDB* SingletonDB::p_instance;
SingletonDBDestroyer SingletonDB::destroyer;


// регистрация нового пользователя +
QString add_new_user(QString login, QString password, QString username, QString language) {
    // проверка на существование пользователя
    if( SingletonDB::getInstance().sendQuery("SELECT user_id FROM Users WHERE login = '" + login + "';") != "")
        return "reg&0";

    // определение ID языка
    auto language_id = SingletonDB::getInstance().sendQuery("SELECT language_id FROM Languages WHERE language_name = '" + language + "';");
    language_id = language_id.left(language_id.length()-2);

    // создание ID нового пользователя
    auto new_user_id = SingletonDB::getInstance().sendQuery("SELECT MAX(user_id) + 1 FROM Users");
    new_user_id = new_user_id.left(new_user_id.length()-2);

    // регистрация
    qDebug()<<SingletonDB::getInstance().sendQuery(
                "INSERT INTO Users(user_id, login, password, username, language_id) VALUES (" + new_user_id + ", '" + login + "', '" + password + "', '" + username + "', '" + language_id + "');"
                );

    // проверка регистрации
    if( SingletonDB::getInstance().sendQuery("SELECT user_id FROM Users WHERE login = '" + login + "';") != "")
        return "reg&1";
    else
        return "reg&0";
}

// авторизация +
QString find_user_for_auth(QString login, QString password) {
    auto user_exist = SingletonDB::getInstance().sendQuery("SELECT username FROM Users WHERE login = '" + login + "' AND password = '" + password + "';");

    if( user_exist != "")
        return user_exist.left(user_exist.length()-2);
    else
        return "auth&0";
}

// изменение имени пользователя +
QString change_username(QString old_username, QString new_username) {

    // определение ID юзера, меняющего имя
    auto user_id = SingletonDB::getInstance().sendQuery(
                "SELECT user_id FROM Users WHERE username = '" + old_username + "';"
                );
    user_id = user_id.left(user_id.length()-2);

    // изменение имени
    qDebug()<<SingletonDB::getInstance().sendQuery(
                "UPDATE Users SET username = '" + new_username + "' WHERE user_id = " + user_id + ";"
                );

    // проверка изменения имени
    if (SingletonDB::getInstance().sendQuery("SELECT user_id FROM Users WHERE username = '" + new_username + "';") != "")
        return "username&change&complete";
    else
        return "username&change&not&complete";
}

// создания нового чата +
QString create_new_dialog(QString first_user, QString second_user) {

    // новое ID диалога
    auto new_dialog_id = SingletonDB::getInstance().sendQuery(
                "SELECT MAX(dialog_id) + 1 FROM Dialog"
                );
    new_dialog_id = new_dialog_id.left(new_dialog_id.length()-2);

    // определение ID первого пользователя
    auto first_user_id = SingletonDB::getInstance().sendQuery(
                "SELECT user_id FROM Users WHERE username = '" + first_user + "';"
                );
    first_user_id = first_user_id.left(first_user_id.length()-2);

    // определение ID второго пользователя
    auto second_user_id = SingletonDB::getInstance().sendQuery(
                "SELECT user_id FROM Users WHERE username = '" + second_user + "';"
                );
    second_user_id = second_user_id.left(second_user_id.length()-2);

    // проверка на существование диалога
    if (SingletonDB::getInstance().sendQuery("SELECT dialog_id FROM Dialog WHERE (dialog_one_user_id = " + first_user_id + " AND dialog_two_user_id = " + second_user_id + ") OR (dialog_one_user_id = " + second_user_id + " AND dialog_two_user_id = " + first_user_id + ");") != "")
        return "dialog&exist";

    // создание диалога
    qDebug()<<SingletonDB::getInstance().sendQuery(
                "INSERT INTO Dialog(dialog_id, dialog_one_user_id, dialog_two_user_id, dialog_time) VALUES (" + new_dialog_id + ", " + first_user_id + ", " + second_user_id + ", '01-01-2000');"
                );

    // проверка создания диалога
    auto dialog_id = SingletonDB::getInstance().sendQuery(
                "SELECT MAX(dialog_id) FROM Dialog WHERE (dialog_one_user_id = " + first_user_id + " AND dialog_two_user_id = " + second_user_id + ") OR (dialog_one_user_id = " + second_user_id + " AND dialog_two_user_id = " + first_user_id + ");"
                );
    dialog_id = dialog_id.left(dialog_id.length()-2);
    if (dialog_id == new_dialog_id)
        return "dialog&create&complete";
    else
        return "dialog&create&not&complete";
}

// отправка сообщения +
QString send_message(QString sender, QString getter, QString message_text) {

    // определение ID нового сообщения
    auto new_message_id = SingletonDB::getInstance().sendQuery(
                "SELECT MAX(messages_id) + 1 FROM Messages"
                );
    new_message_id = new_message_id.left(new_message_id.length()-2);

    // определение ID отправителя
    auto sender_id = SingletonDB::getInstance().sendQuery(
                "SELECT user_id FROM Users WHERE username = '" + sender + "';"
                );
    sender_id = sender_id.left(sender_id.length()-2);

    // определение ID получателя
    auto getter_id = SingletonDB::getInstance().sendQuery(
                "SELECT user_id FROM Users WHERE username = '" + getter + "';"
                );
    getter_id = getter_id.left(getter_id.length()-2);

    // определение ID диалога
    auto dialog_id = SingletonDB::getInstance().sendQuery(
                "SELECT MAX(dialog_id) FROM Dialog WHERE (dialog_one_user_id = " + sender_id + " AND dialog_two_user_id = " + getter_id + ") OR (dialog_one_user_id = " + getter_id + " AND dialog_two_user_id = " + sender_id + ");"
                );
    dialog_id = dialog_id.left(dialog_id.length()-2);

    // отправка сообщения в БД
    qDebug()<<SingletonDB::getInstance().sendQuery(
                "INSERT INTO Messages(messages_id, message_text, dialog_id, from_user_id, to_user_id, is_read, message_time) VALUES (" + new_message_id + ", '" + message_text + "', " + dialog_id + ", " + sender_id + ", " + getter_id + ", 1, '01-01-2000');"
                );

    // проверка отправки сообщения
    auto message_id = SingletonDB::getInstance().sendQuery("SELECT MAX(messages_id) FROM Messages WHERE from_user_id = " + sender_id + " AND to_user_id = " + getter_id + ";");
    message_id = message_id.left(message_id.length()-2);
    if (message_id == new_message_id)
        return "message&send&complete";
    else
        return "message&send&not&complete";
}


QString take_user_id(QString username) {
    auto user_find = SingletonDB::getInstance().sendQuery("SELECT user_id FROM Users WHERE username = '" + username + "';");

    if( user_find != "")
        return user_find.left(user_find.length()-2);
    else
        return "exist&0";
}

QString get_all_dialog_message(QString first_user, QString second_user)
{
    // определение ID отправителя
    auto first_user_id = SingletonDB::getInstance().sendQuery(
                "SELECT user_id FROM Users WHERE username = '" + first_user + "';"
                );
    first_user_id = first_user_id.left(first_user_id.length()-2);

    // определение ID получателя
    auto second_user_id = SingletonDB::getInstance().sendQuery(
                "SELECT user_id FROM Users WHERE username = '" + second_user + "';"
                );
    second_user_id = second_user_id.left(second_user_id.length()-2);

    // определение ID диалога
    auto dialog_id = SingletonDB::getInstance().sendQuery(
                "SELECT MAX(dialog_id) FROM Dialog WHERE (dialog_one_user_id = " + first_user_id + " AND dialog_two_user_id = " + second_user_id + ") OR (dialog_one_user_id = " + second_user_id + " AND dialog_two_user_id = " + first_user_id + ");"
                );
    dialog_id = dialog_id.left(dialog_id.length()-2);

    // проверка отправки сообщения
    auto messages = SingletonDB::getInstance().sendQuery("SELECT messages_id, from_user_id, message_text FROM Messages WHERE (from_user_id = " + first_user_id + " AND to_user_id = " + second_user_id + ") OR (from_user_id = " + second_user_id + " AND to_user_id = " + first_user_id + ") AND dialog_id = " + dialog_id + ";");
    messages = messages.left(messages.length()-2);
    if (messages != "")
        return messages;
    else
        return "message&send&0";
}
