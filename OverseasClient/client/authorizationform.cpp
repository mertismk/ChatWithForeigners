#include "authorizationform.h"
#include "ui_authorizationform.h"

int flag = 0;
AuthorizationForm::AuthorizationForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AuthorizationForm)
{
    ui->setupUi(this);
    ui->email_label->setVisible(0);
    ui->email_lineEdit->setVisible(0);
    ui->exit_pushButton->setVisible(0);
}

AuthorizationForm::~AuthorizationForm()
{
    delete ui;
}

void AuthorizationForm::on_signIn_pushButton_clicked()
{
    QString login = ui->login_lineEdit->text();
    QString password = ui->password_lineEdit->text();
    if (login == "admin" && password == "admin") {
        QMessageBox::information(this, "Ура", "Вы успешно авторизовались");
        emit return_auth();
        hide();
    } else {
        QMessageBox::critical(this, "Ошибка", "Логин или пароль неверны, попробуйте снова");
    }
}


void AuthorizationForm::on_signUp_pushButton_clicked()
{
    if (flag == 0){
        ui->email_label->setVisible(1);
        ui->email_lineEdit->setVisible(1);
        ui->exit_pushButton->setVisible(1);
        ui->signIn_pushButton->setVisible(0);
        flag = 1;
    }
    else{
        ui->email_label->setVisible(0);
        ui->email_lineEdit->setVisible(0);
        ui->exit_pushButton->setVisible(0);
        ui->signIn_pushButton->setVisible(1);
        flag = 0;
    }
}


void AuthorizationForm::on_exit_pushButton_clicked()
{
    ui->email_label->setVisible(0);
    ui->email_lineEdit->setVisible(0);
    ui->exit_pushButton->setVisible(0);
    ui->signIn_pushButton->setVisible(1);
    flag = 0;
}

