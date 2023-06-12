#include "chat.h"
#include "ui_chat.h"

QString CLIENTUSERNAME;
QString DIALOGUSERNAME;
QString LANG;

Chat::Chat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);

    chatClient = new ChatClient;
    chatClient->connectToServer("127.0.0.1", 33333);
}

Chat::~Chat()
{
    delete ui;
    delete chatClient;
}

void Chat::loadDataFromMainWindow(const QString& data, const QString& data2)
{

    QString part1 = data;
    QString part2 = data2;

    ui->Chat_Username->setText(part1);
    CLIENTUSERNAME = part2;
    DIALOGUSERNAME = part1;
    qDebug()<<CLIENTUSERNAME<<DIALOGUSERNAME;
    LANG = "ru";
    loadDialog(CLIENTUSERNAME, DIALOGUSERNAME, LANG);
}


void Chat::loadDialog(QString client_name, QString dialog_user, QString language)
{
    chatClient->sendMessage("take_all_messages&" + client_name + "&" + dialog_user + "&" + language + "\n");
    QString messages_string = chatClient->getResponse();
    messages_string = messages_string.trimmed();
    QList<QString> all_mes = messages_string.split("&");
    int n = all_mes.indexOf(all_mes.last()) + 1;

    QString result;
    for (int i = 0; i < n; i++)
    {
        result += all_mes[i] + "\n";
        if (i % 2 == 1) result += "\n";
    }
    result = result.left(result.length() - 1);

    ui->Chat_textBrowser->setText(result);
}


void Chat::on_Chat_pushButton_clicked()
{
    QString message = ui->Chat_lineEdit->text().trimmed();
    qDebug()<<message;
    if (message != "" && message != " ")
    {
        chatClient->sendMessage("new_message&" + CLIENTUSERNAME + "&" + DIALOGUSERNAME + "&" + message + "\n");
        QString nothing = chatClient->getResponse();
        ui->Chat_lineEdit->setText("");
        loadDialog(CLIENTUSERNAME, DIALOGUSERNAME, LANG);
    }
}


void Chat::on_pushButton_clicked()
{
    loadDialog(CLIENTUSERNAME, DIALOGUSERNAME, LANG);
}



void Chat::on_Chat_lineEdit_returnPressed()
{
    QString message = ui->Chat_lineEdit->text().trimmed();
    qDebug()<<message;
    if (message != "" && message != " ")
    {
        chatClient->sendMessage("new_message&" + CLIENTUSERNAME + "&" + DIALOGUSERNAME + "&" + message + "\n");
        QString nothing = chatClient->getResponse();
        ui->Chat_lineEdit->setText("");
        loadDialog(CLIENTUSERNAME, DIALOGUSERNAME, LANG);
    }
}

void Chat::on_comboBox_activated(int index)
{
    if (index == 0) {
        LANG = "ru";
    } else if (index == 1) {
        LANG = "az";
    } else if (index == 2) {
        LANG = "en";
    } else if (index == 3) {
        LANG = "ar";
    } else if (index == 4) {
        LANG = "hy";
    } else if (index == 5) {
        LANG = "be";
    } else if (index == 6) {
        LANG = "ka";
    } else if (index == 7) {
        LANG = "es";
    } else if (index == 8) {
        LANG = "it";
    } else if (index == 9) {
        LANG = "kk";
    } else if (index == 10) {
        LANG = "ky";
    } else if (index == 11) {
        LANG = "zh";
    } else if (index == 12) {
        LANG = "de";
    } else if (index == 13) {
        LANG = "sr";
    } else if (index == 14) {
        LANG = "tr";
    } else if (index == 15) {
        LANG = "uk";
    } else if (index == 16) {
        LANG = "fr";
    }
    loadDialog(CLIENTUSERNAME, DIALOGUSERNAME, LANG);
}

