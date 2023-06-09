#include "chat.h"
#include "ui_chat.h"

QString CLIENTUSERNAME;
QString DIALOGUSERNAME;

Chat::Chat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);
}

Chat::~Chat()
{
    delete ui;
    delete chatClient;
}

void Chat::loadDataFromMainWindow(const QString& data)
{
    QList<QByteArray> parts = data.split('&');

    ui->Chat_Username->setText(parts[0]);
    CLIENTUSERNAME = parts[1];
    DIALOGUSERNAME = parts[0];
}
