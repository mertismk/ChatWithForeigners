#include "authorizationform.h"
#include "ui_authorizationform.h"

//username
QString USERNAME;

//flags
int FLAG = 0;

AuthorizationForm::AuthorizationForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AuthorizationForm)
{
    ui->setupUi(this);
    ui->email_label->setVisible(0);
    ui->email_lineEdit->setVisible(0);
    ui->exit_pushButton->setVisible(0);

    chatClient = new ChatClient;
    chatClient->connectToServer("127.0.0.1", 33333);
}

AuthorizationForm::~AuthorizationForm()
{
    delete ui;
    delete chatClient;
}

void AuthorizationForm::usefulFunc()
{
    chatClient->sendMessage("login&user1&user1");
    auto aaa = chatClient->getResponse();
    aaa = aaa.left(aaa.length() - 1);
}

void AuthorizationForm::on_signIn_pushButton_clicked()
{
    QString login = ui->login_lineEdit->text();
    QString password = ui->password_lineEdit->text();
    chatClient->sendMessage("login&" + login + "&" + password);
    auto aaa = chatClient->getResponse();
    aaa = aaa.left(aaa.length() - 1);
    USERNAME = aaa;
    if (aaa != "auth&0" && aaa != "") {
        QMessageBox::information(this, "Ура", "Вы успешно авторизовались, " + USERNAME);
        emit updateData(USERNAME);
        emit return_auth();
        hide();
    } else {
        QMessageBox::critical(this, "Ошибка", "Логин или пароль неверны, попробуйте снова");
    }
}


void AuthorizationForm::on_signUp_pushButton_clicked()
{
    if (FLAG == 0){
        ui->email_label->setVisible(1);
        ui->email_lineEdit->setVisible(1);
        ui->exit_pushButton->setVisible(1);
        ui->signIn_pushButton->setVisible(0);
        FLAG = 1;
    }
    else{
        ui->email_label->setVisible(0);
        ui->email_lineEdit->setVisible(0);
        ui->exit_pushButton->setVisible(0);
        ui->signIn_pushButton->setVisible(1);
        FLAG = 0;
    }
}


void AuthorizationForm::on_exit_pushButton_clicked()
{
    ui->email_label->setVisible(0);
    ui->email_lineEdit->setVisible(0);
    ui->exit_pushButton->setVisible(0);
    ui->signIn_pushButton->setVisible(1);
    FLAG = 0;
}

