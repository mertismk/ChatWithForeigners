#include "mytcpserver.h"
#include "parsing.cpp"
#include <QDebug>
#include <QCoreApplication>

MyTcpServer::~MyTcpServer()
{
    //mTcpSocket->close();
    for (QTcpSocket* s : mTcpSocket)
        s->close();
    mTcpServer->close();
    server_status=0;
}
MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent){
    mTcpServer = new QTcpServer(this);
    connect(mTcpServer, &QTcpServer::newConnection,
            this, &MyTcpServer::slotNewConnection);

    if(!mTcpServer->listen(QHostAddress::Any, 33333)){
        qDebug() << "server is not started";
    } else {
        server_status=1;
        qDebug() << "server is started";
    }
}

void MyTcpServer::slotNewConnection(){
    if(server_status==1){
        QTcpSocket *cur_mTcpSocket;
        cur_mTcpSocket = mTcpServer->nextPendingConnection();
        cur_mTcpSocket->write("Hello, World!!! I am echo server!\r\n");
        connect(cur_mTcpSocket, &QTcpSocket::readyRead,
                this,&MyTcpServer::slotServerRead);
        connect(cur_mTcpSocket,&QTcpSocket::disconnected,
                this,&MyTcpServer::slotClientDisconnected);
        mTcpSocket[cur_mTcpSocket->socketDescriptor()] = cur_mTcpSocket;
    }
}

void MyTcpServer::slotServerRead(){
    QTcpSocket *cur_mTcpSocket = (QTcpSocket *)sender();
    QByteArray array;
    QString msg;
    while(cur_mTcpSocket->bytesAvailable()>0)
    {
        array = cur_mTcpSocket->readAll();
        msg = array.trimmed();
    }

    std::string mssg = "auth&log&pas&";
    QString messege = parsing(msg);
    cur_mTcpSocket->write(messege);
}

void MyTcpServer::slotClientDisconnected(){
    QTcpSocket *cur_mTcpSocket = (QTcpSocket *)sender();
    cur_mTcpSocket->close();
}