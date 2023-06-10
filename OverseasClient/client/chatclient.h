#ifndef CHATCLIENT_H
#define CHATCLIENT_H

#include <QtWidgets/QApplication>
#include <QtNetwork/QTcpSocket>
#include <QObject>
#include <QString>

class ChatClient : public QObject
{
    Q_OBJECT
public:

    explicit ChatClient(QObject *parent = nullptr);
    ~ChatClient();

    void connectToServer(const QString& ipAddress, int port);
    void sendMessage(const QString& message);

private slots:
    void slotConnected();
    void slotError(QAbstractSocket::SocketError error);
    void slotReadyRead();

public:
    QString getResponse();

private:
    QString response;

    QTcpSocket *mTcpSocket;
};

#endif // CHATCLIENT_H
