#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QApplication>
#include <QtNetwork/QTcpSocket>
#include <QObject>
#include <QString>
#include "authorizationform.h"
#include "chat.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class ChatClient;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateResponse();

    void on_Exit_pushButton_clicked();

    void on_RusLang_action_triggered();

    void on_EngLang_action_triggered();

    void on_GerLang_action_triggered();

    void on_FrLang_action_triggered();

    void on_ChLang_action_triggered();

    void on_SpLang_action_triggered();

    void on_Chat1_pushButton_clicked();

    void on_Chat2_pushButton_clicked();

    void on_Chat3_pushButton_clicked();

    void on_Chat4_pushButton_clicked();

    void on_Chat5_pushButton_clicked();

    void on_NickEdit_pushButton_clicked();

    void on_usernameLineEdit_editingFinished();

    void on_Exit_pushButton_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    AuthorizationForm *ui_auth;
    Chat *ui_chat;
    ChatClient *chatClient;
};

class ChatClient : public QObject
{
    Q_OBJECT
public:
    QString getResponse();

    explicit ChatClient(QObject *parent = nullptr);
    ~ChatClient();

    void connectToServer(const QString& ipAddress, int port);
    void sendMessage(const QString& message);

private slots:
    void slotConnected();
    void slotError(QAbstractSocket::SocketError error);
    void slotReadyRead();

private:
    QString response;

    QTcpSocket *mTcpSocket;
};
#endif // MAINWINDOW_H
