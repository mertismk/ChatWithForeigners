#include "chat.h"
#include "ui_chat.h"

QString CLIENTUSERNAME;
QString DIALOGUSERNAME;

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

    QString aaa = loadDialog(CLIENTUSERNAME, DIALOGUSERNAME);
    ui->Chat_textBrowser->setText(aaa);

}


QString Chat::loadDialog(QString client_name, QString dialog_user)
{
    chatClient->sendMessage("take_all_messages&" + client_name + "&" + dialog_user);
    QString aaa = chatClient->getResponse();
    qDebug()<<aaa;
    return aaa;
}


void Chat::on_Chat_pushButton_clicked()
{
    QString message = ui->Chat_lineEdit->text().trimmed();
    if (message != "" && message != " ")
    {
        chatClient->sendMessage("new_message&" + CLIENTUSERNAME + "&" + DIALOGUSERNAME + "&" + message);
    }
}

