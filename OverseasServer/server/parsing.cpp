#include "parsing.h"


QString login(QString login, QString password) {
    qDebug() << login << password;
    return find_user_for_auth(login, password);
}

QString registration(QString login, QString password, QString username, QString language) {
    qDebug() << login << password << username << language;
    return add_new_user(login, password, username, language);
}

QString change_name_pars(QString old_name, QString new_name) {
    qDebug() << old_name << new_name;
    return change_username(old_name, new_name);
}

QString create_dialog(QString first_user, QString second_user) {
    qDebug() << first_user << second_user;
    return create_new_dialog(first_user, second_user);
}

QString sending_message(QString first_user, QString second_user, QString message_text) {
    qDebug() << first_user << second_user << message_text;
    return send_message(first_user, second_user, message_text);
}

QString take_user(QString username) {
    qDebug() << username;
    return take_user_id(username);
}

QString take_messages(QString first_user, QString second_user, QString language) {
    qDebug() << first_user << second_user;
    return get_all_dialog_message(first_user, second_user, language);
}

QString take_username(QString user_id) {
    qDebug() << user_id;
    return get_username(user_id);
}

QString take_dialog_users(QString username) {
    qDebug() << username;
    return "";//get_dialog_users(username);
}


QString fparsing(QByteArray message) {
    QList<QByteArray> parts = message.split('&');
    qDebug() << parts[0];
    if (parts[0] == "login") {
        if (parts.length() != 3) {
            qDebug() << "error";
        } else {
            QString _login = parts[1];
            QString password = parts[2];
            QString res = login(_login, password);
            qDebug() << res;
            return res;
        }
    } else if (parts[0] == "register") {
        if (parts.length() != 5) {
            qDebug() << "error";
            return "error";
        } else {
            QString login = parts[1];
            QString password = parts[2];
            QString username = parts[3];
            QString language = parts[4];
            QString res = registration(login, password, username, language);
            qDebug() << res;
            return res;
        }
    } else if (parts[0] == "new_username") {
        if (parts.length() != 3) {
            qDebug() << "error";
            return "error";
        } else {
            QString old_username = parts[1];
            QString new_username = parts[2];
            QString res = change_name_pars(old_username, new_username);
            qDebug() << res;
            return res;
        }
    } else if (parts[0] == "new_dialog") {
        if (parts.length() != 3) {
            qDebug() << "error";
            return "error";
        } else {
            QString first_user = parts[1];
            QString second_user = parts[2];
            QString res = create_dialog(first_user, second_user);
            qDebug() << res;
            return res;
        }
    } else if (parts[0] == "new_message") {
        if (parts.length() != 4) {
            qDebug() << "error";
            return "error";
        } else {
            QString first_user = parts[1];
            QString second_user = parts[2];
            QString message_text = parts[3];

            QString res = sending_message(first_user, second_user, message_text);
            qDebug() << res;
            return res;
        }
    } else if (parts[0] == "select_user") {
        if (parts.length() != 2) {
            qDebug() << "error";
            return "error";
        } else {
            QString user = parts[1];
            QString res = take_user(user);
            qDebug() << res;
            return res;
        }
    } else if (parts[0] == "take_all_messages") {

        if (parts.length() != 4) {
            qDebug() << "error";
            return "error";
        } else {
            QString first_user = parts[1];
            QString second_user = parts[2];
            QString language = parts[3];
            QString res = take_messages(first_user, second_user, language);
            qDebug() << res;
            return res;
        }
    } else if (parts[0] == "username") {
        if (parts.length() != 2) {
            qDebug() << "error";
            return "error";
        } else {
            QString user_id = parts[1];
            QString res = take_username(user_id);
            qDebug() << res;
            return res;
        }
    } else if (parts[0] == "take_all_dialogs") {
        if (parts.length() != 2) {
            qDebug() << "error";
            return "error";
        } else {
            QString username = parts[1];
            //QString res = take_dialog_users(username);
            //qDebug() << res;
            return "";
        }
    } else return "";
    return "";
}
