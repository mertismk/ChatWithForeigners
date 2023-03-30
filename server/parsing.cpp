#include "parsing.h"

std::string parsing(std::string str)
{
    if (str.substr(0, str.find('&')) == "auth")
        return auth(str.substr(str.find('&') + 1, -1));
    else return "error";
}

std::string auth(std::string str)
{
    auto login = str.substr(0, str.find('&'));
    auto pas = str.substr(str.find('&') + 1, str.find('&'));
    return "auth ok. user login" + login;
}
