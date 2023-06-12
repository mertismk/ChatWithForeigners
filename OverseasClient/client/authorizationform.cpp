#include "authorizationform.h"
#include "ui_authorizationform.h"

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
    ui->password_lineEdit->setEchoMode(QLineEdit::Password);
    chatClient = new ChatClient;
    chatClient->connectToServer("127.0.0.1", 33333);
}


AuthorizationForm::~AuthorizationForm()
{
    delete ui;
    delete chatClient;
}


void AuthorizationForm::on_signIn_pushButton_clicked()
{
    QString login = ui->login_lineEdit->text();
    QString password = ui->password_lineEdit->text();
    chatClient->sendMessage("login&" + login + "&" + password + "\n");
    auto aaa = chatClient->getResponse();
    aaa = aaa.left(aaa.length());
    if (aaa != "auth&0" && aaa != "") {
        QMessageBox::information(this, "Ура", "Вы успешно авторизовались, " + aaa);
        emit updateData(aaa);
        emit return_auth();
        hide();
    } else {
        QMessageBox::critical(this, "Ошибка", "Логин или пароль неверны, попробуйте снова");
    }
}


void AuthorizationForm::on_signUp_pushButton_clicked()
{
    if (FLAG == 0){
        ui->login_lineEdit->setText("");
        ui->password_lineEdit->setText("");
        ui->email_label->setVisible(1);
        ui->email_lineEdit->setVisible(1);
        ui->exit_pushButton->setVisible(1);
        ui->signIn_pushButton->setVisible(0);
        FLAG = 1;
    } else {
        QString login = ui->login_lineEdit->text().trimmed();
        QString password = ui->password_lineEdit->text().trimmed();
        QString username = ui->email_lineEdit->text().trimmed();
        qDebug()<<login<<password<<username;
        if (login != "" && password != "" && username != "")
        {
            qDebug()<<"ezsrxtcfgvubihnjkpl";
            chatClient->sendMessage("register&" + login + "&" + password + "&" + username + "&English\n");
            auto aaa = chatClient->getResponse();
            qDebug()<<aaa;
            if (aaa == "reg&1") {
                QMessageBox::information(this, "Ура", "Вы успешно pfhtubcnhbhjdfkbcm, " + aaa);
                ui->email_lineEdit->setText("");
                ui->email_label->setVisible(0);
                ui->email_lineEdit->setVisible(0);
                ui->exit_pushButton->setVisible(0);
                ui->signIn_pushButton->setVisible(1);
                FLAG = 0;
            } else {
                QMessageBox::critical(this, "Ошибка", "Неверно введены данные при регистрации или такой пользователь уже существует");
                ui->login_lineEdit->setText("");
                ui->password_lineEdit->setText("");
                ui->email_lineEdit->setText("");
            }
        } else {
            QMessageBox::critical(this, "Ошибка", "Неверно введены данные при регистрации (Поля не могут оставаться пустыми)");
            ui->login_lineEdit->setText("");
            ui->password_lineEdit->setText("");
            ui->email_lineEdit->setText("");
        }
    }
}


void AuthorizationForm::on_exit_pushButton_clicked()
{
    ui->login_lineEdit->setText("");
    ui->password_lineEdit->setText("");
    ui->email_lineEdit->setText("");
    ui->email_label->setVisible(0);
    ui->email_lineEdit->setVisible(0);
    ui->exit_pushButton->setVisible(0);
    ui->signIn_pushButton->setVisible(1);
    FLAG = 0;
}


void AuthorizationForm::on_login_lineEdit_returnPressed()
{
    ui->password_lineEdit->setFocus();
}


void AuthorizationForm::on_password_lineEdit_returnPressed()
{
    QString login = ui->login_lineEdit->text();
    QString password = ui->password_lineEdit->text();
    chatClient->sendMessage("login&" + login + "&" + password + "\n");
    auto aaa = chatClient->getResponse();
    aaa = aaa.left(aaa.length());
    if (aaa != "auth&0" && aaa != "") {
        QMessageBox::information(this, "Ура", "Вы успешно авторизовались, " + aaa);
        emit updateData(aaa);
        emit return_auth();
        hide();
    } else {
        QMessageBox::critical(this, "Ошибка", "Логин или пароль неверны, попробуйте снова");
    }
}

