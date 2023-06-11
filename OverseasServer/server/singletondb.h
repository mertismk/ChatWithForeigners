#ifndef SINGLETONDB_H
#define SINGLETONDB_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QtSql/QSqlRecord>

class SingletonDB;

class SingletonDBDestroyer
{
private:
    SingletonDB* p_instance;
public:
    ~SingletonDBDestroyer() { delete p_instance; }
    void initialize(SingletonDB* p){ p_instance = p; }
};

class SingletonDB
{
private:
    static SingletonDB* p_instance;
    static SingletonDBDestroyer destroyer;

    QSqlDatabase m_database;

protected:
    SingletonDB() {
        m_database = QSqlDatabase::addDatabase("QSQLITE");
        m_database.setDatabaseName("../OSdb.db");
        if (!m_database.open())
            qDebug() << m_database.lastError();
    }
    SingletonDB( const SingletonDB& ) = delete;
    SingletonDB& operator=( SingletonDB& )=delete;
    ~SingletonDB() {
        m_database.close();
    }
    friend class SingletonDBDestroyer;

public:
    static SingletonDB& getInstance() {
        if (!p_instance)
        {
            p_instance = new SingletonDB();
            destroyer.initialize(p_instance);
        }
        return *p_instance;
    }

    QString sendQuery(QString);
};

QString add_new_user(QString login, QString password, QString username, QString language);
QString find_user_for_auth(QString login, QString password);
QString change_username(QString old_username, QString new_username);
QString create_new_dialog(QString first_user, QString second_user);
QString send_message(QString sender, QString getter, QString message_text);
QString take_user_id(QString username);
QString get_all_dialog_message(QString first_user, QString second_user);
QString get_username(QString user_id);
QString get_dialog_users(QString user_id);

#endif // SINGLETONDB_H
