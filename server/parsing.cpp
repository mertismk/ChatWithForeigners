#include "parsing.h"

QString parsing(QString str)
{
    if (str.mid(0, str.indexOf('&')) == "auth")
        return auth(str.mid(str.indexOf('&') + 1, -1));
    else return "error";
}

QString auth(QString str)
{
    auto login = str.mid(0, str.indexOf('&'));
    auto pas = str.mid(str.indexOf('&') + 1, -2);
    return "auth ok. user login" + login;
}

// auth&login&pas&
// auth&Nikita&1234567890&
