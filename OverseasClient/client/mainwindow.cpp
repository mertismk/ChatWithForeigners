#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"


//global
QString serveranswer;
QString USERNAME;
//flags
int flag_changeNickname = 0;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_chat = new Chat;
    ui_auth = new AuthorizationForm;

    chatClient = new ChatClient;
    chatClient->connectToServer("127.0.0.1", 33333);

    connect(ui_auth, &AuthorizationForm::updateData, this, &MainWindow::updateField);
    connect(ui_auth, &AuthorizationForm::return_auth, this, &MainWindow::show);
    connect(chatClient, &ChatClient::getResponse, this, &MainWindow::updateResponse);
    ui_auth->show();
}

MainWindow::~MainWindow()
{
    delete chatClient;
    delete ui_auth;
    delete ui_chat;
    delete ui;
}


void MainWindow::updateResponse()
{
    QString response = chatClient->getResponse();
    // Обновите интерфейс с полученным ответом сервера
    // Например, можно использовать QLabel или QTextEdit для отображения ответа
    qDebug()<<response;
}


void MainWindow::updateField(const QString& newData)
{
    ui->usernameLineEdit->setText(newData);
    USERNAME = newData;
}


void MainWindow::eventInMainWindow(QString username)
{
    QString dataFromMainWindow = username;
    ui_chat->loadDataFromMainWindow(dataFromMainWindow);
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


void MainWindow::on_NickEdit_pushButton_clicked()
{

}


void MainWindow::on_Search_pushButton_clicked()
{
    QString user_dialog = ui->Search_lineEdit->text();
    chatClient->sendMessage("select_user&" + user_dialog);
    auto aaa = chatClient->getResponse();
    aaa = aaa.left(aaa.length() - 1);
    if (aaa != "" && aaa != "exist&0")
    {
        eventInMainWindow(user_dialog + "&" + USERNAME);
        ui_chat->show();
    }
}

