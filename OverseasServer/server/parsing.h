#ifndef PARSING_H
#define PARSING_H
#include <QByteArray>
#include <QDebug>
#include "singletondb.h"
#include "translate.h"

QString login(QByteArray username, QByteArray password);
QString registration(QByteArray username, QByteArray password);
QString change_name_pars(QString old_name, QString new_name);
QString create_dialog(QString first_user, QString second_user);
QString sending_message(QString first_user, QString second_user, QString message_text);
QString take_user(QString username);
QString fparsing(QByteArray message);

#endif  // PARSING_H
