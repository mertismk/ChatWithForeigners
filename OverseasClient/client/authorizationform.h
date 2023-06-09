#ifndef AUTHORIZATIONFORM_H
#define AUTHORIZATIONFORM_H

#include <QWidget>
#include <QMessageBox>
#include "chatclient.h"

namespace Ui {
class AuthorizationForm;
}

class AuthorizationForm : public QWidget
{
    Q_OBJECT

public:
    explicit AuthorizationForm(QWidget *parent = nullptr);
    ~AuthorizationForm();

    void usefulFunc();

private slots:

    void on_signIn_pushButton_clicked();

    void on_signUp_pushButton_clicked();

    void on_exit_pushButton_clicked();

signals:
    void return_auth();
    void updateData(const QString& newData);

private:
    Ui::AuthorizationForm *ui;
    ChatClient *chatClient;
};

#endif // AUTHORIZATIONFORM_H
