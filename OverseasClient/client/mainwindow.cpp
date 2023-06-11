#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"


//global
QString USERNAME_MAINWINDOW;

//flags
int flag_changeNickname = 0;


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui_chat = new Chat;
    ui_auth = new AuthorizationForm;


    ui->Chat1_pushButton->setVisible(0);
    ui->Chat2_pushButton->setVisible(0);
    ui->Chat3_pushButton->setVisible(0);
    ui->Chat4_pushButton->setVisible(0);
    ui->Chat5_pushButton->setVisible(0);

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
    ui_chat->close();
    delete ui_chat;
    delete ui;
}


QString MainWindow::updateResponse()
{
    QString response = chatClient->getResponse();
    // Обновите интерфейс с полученным ответом сервера
    // Например, можно использовать QLabel или QTextEdit для отображения ответа
    return response;
}


void MainWindow::updateField(const QString& newData)
{
    ui->usernameLineEdit->setText(newData);
    USERNAME_MAINWINDOW = newData;
    // updateDialogList();
}


void MainWindow::eventInMainWindow(QString username, QString dialog_username)
{
    ui_chat->loadDataFromMainWindow(dialog_username, username);
}


void MainWindow::on_Exit_pushButton_clicked()
{
    ui_chat->close();
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
    //ui_chat->show();
}


void MainWindow::on_Chat2_pushButton_clicked()
{
    //ui_chat->show();
}


void MainWindow::on_Chat3_pushButton_clicked()
{
    //ui_chat->show();
}


void MainWindow::on_Chat4_pushButton_clicked()
{
    //ui_chat->show();
}


void MainWindow::on_Chat5_pushButton_clicked()
{
   // ui_chat->show();
}


void MainWindow::on_NickEdit_pushButton_clicked()
{

}


void MainWindow::on_Search_pushButton_clicked()
{
    QString user_dialog = ui->Search_lineEdit->text();
    qDebug()<<user_dialog;
    chatClient->sendMessage("select_user&" + user_dialog + "\n");
    QString aaa = chatClient->getResponse().trimmed();
    qDebug()<<aaa;
    if (aaa != "" && aaa != "exist&0")
    {
        eventInMainWindow(USERNAME_MAINWINDOW, user_dialog);
        ui_chat->show();
    }
}


void MainWindow::on_dialog_pushButton_clicked()
{
    chatClient->sendMessage("new_dialog&" + USERNAME_MAINWINDOW + "&" + ui->dialog_lineEdit->text() + "\n");
    QString aaa = chatClient->getResponse();
    if (aaa == "dialog&exist")
    {
        ui->dialogMessageLabel->setText("Чат с данным пользователем существует");
        ui->dialog_lineEdit->setText("");
    } else if (aaa == "dialog&create&complete") {
        ui->dialogMessageLabel->setText("Чат успешно создан");
        ui->dialog_lineEdit->setText("");
    } else {
        ui->dialogMessageLabel->setText("Чат не создан, проверьте корректность\nвведённого имени пользователя");
        ui->dialog_lineEdit->setText("");
    }
    // updateDialogList();
}

/*
void MainWindow::updateDialogList()
{
    chatClient->sendMessage("take_all_dialogs&" + USERNAME_MAINWINDOW + "\n");
    QString aaa = chatClient->getResponse();
    QString inf = ui->label->text();
    ui->label->setText(aaa);
}
*/
