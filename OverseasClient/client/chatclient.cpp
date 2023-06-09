#include "chatclient.h"

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
        response = QString::fromUtf8(data);
        qDebug() << "Received message: " << response;
    }
}

QString ChatClient::getResponse()
{
    return response;
}


void ChatClient::slotConnected()
{
    qDebug() << "Connected to server.";
}

void ChatClient::slotError(QAbstractSocket::SocketError error)
{
    qDebug() << "Socket error: " << error;
}
