#ifndef AUTHORIZATIONFORM_H
#define AUTHORIZATIONFORM_H

#include <QWidget>

namespace Ui {
class AuthorizationForm;
}

class AuthorizationForm : public QWidget
{
    Q_OBJECT

public:
    explicit AuthorizationForm(QWidget *parent = nullptr);
    ~AuthorizationForm();

private slots:

    void on_signIn_pushButton_clicked();

    void on_signUp_pushButton_clicked();

    void on_exit_pushButton_clicked();

signals:
    void return_auth();

private:
    Ui::AuthorizationForm *ui;

};

#endif // AUTHORIZATIONFORM_H
