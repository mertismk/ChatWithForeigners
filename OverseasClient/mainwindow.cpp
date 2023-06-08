#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

//flags
int flag_changeNickname = 0;

ChatClient::ChatClient(QObject *parent) : QObject(parent)
{
    mTcpSocket = new QTcpSocket(this);
    connect(mTcpSocket, &QTcpSocket::readyRead, this, &ChatClient::slotReadyRead);
    connect(mTcpSocket, &QTcpSocket::connected, this, &ChatClient::slotConnected);
    connect(mTcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(slotError(QAbstractSocket::SocketError)));
}

ChatClient::~ChatClient()
{
    mTcpSocket->close();
}

void ChatClient::connectToServer(const QString& ipAddress, int port)
{
    mTcpSocket->connectToHost(ipAddress, port);
}

void ChatClient::sendMessage(const QString& message)
{
    if (mTcpSocket->state() == QAbstractSocket::ConnectedState)
    {
        QByteArray data = message.toUtf8();
        mTcpSocket->write(data);
    }
}

void ChatClient::slotReadyRead()
{
    while (mTcpSocket->canReadLine())
    {
        QByteArray data = mTcpSocket->readLine();
        qDebug() << "Received message: " << data;
    }
}

void ChatClient::slotConnected()
{
    qDebug() << "Connected to server.";
}

void ChatClient::slotError(QAbstractSocket::SocketError error)
{
    qDebug() << "Socket error: " << error;
}

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_chat = new Chat;
    ui_auth = new AuthorizationForm;

    chatClient = new ChatClient; // Create an instance of ChatClient

    chatClient->connectToServer("127.0.0.1", 33333); // Connect to the server

    connect(ui_auth, &AuthorizationForm::return_auth, this, &MainWindow::show);
    ui_auth->show();
}

MainWindow::~MainWindow()
{
    delete chatClient; // Cleanup the ChatClient instance
    delete ui_auth;
    delete ui_chat;
    delete ui;
}


void MainWindow::on_Exit_pushButton_clicked()
{
    this->close();
}


void MainWindow::on_RusLang_action_triggered()
{
    qDebug()<<"Russian Language Changed";
}


void MainWindow::on_EngLang_action_triggered()
{
    qDebug()<<"English Language Changed";
}


void MainWindow::on_GerLang_action_triggered()
{
    qDebug()<<"German Language Changed";
}


void MainWindow::on_FrLang_action_triggered()
{
    qDebug()<<"Franch Language Changed";
}


void MainWindow::on_ChLang_action_triggered()
{
    qDebug()<<"Chinese Language Changed";
}


void MainWindow::on_SpLang_action_triggered()
{
    qDebug()<<"Spanish Language Changed";
}


void MainWindow::on_Chat1_pushButton_clicked()
{
    ui_chat->show();
}


void MainWindow::on_Chat2_pushButton_clicked()
{
    ui_chat->show();
}


void MainWindow::on_Chat3_pushButton_clicked()
{
    ui_chat->show();
}


void MainWindow::on_Chat4_pushButton_clicked()
{
    ui_chat->show();
}


void MainWindow::on_Chat5_pushButton_clicked()
{
    ui_chat->show();
}


QString old_name;
void MainWindow::on_NickEdit_pushButton_clicked()
{
    if(flag_changeNickname == 1) {
        old_name = ui->usernameLineEdit->text();
        qDebug()<<old_name;
        ui->usernameLineEdit->setReadOnly(true);
        flag_changeNickname = 0;
    } else {
        if (old_name != ui->usernameLineEdit->text()) {
            chatClient->sendMessage("new_user_name&" + old_name + "&" + ui->usernameLineEdit->text());
            chatClient->slotReadyRead
        }

        ui->usernameLineEdit->setReadOnly(false);
        flag_changeNickname = 1;
    }
}

