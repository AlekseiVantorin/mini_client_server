#include "server.h"

server::server() {
    if (this->listen(QHostAddress::LocalHost, 80)) {
        qDebug() << "Listening";
    } else {
        qDebug() << "Error";
    }
}

void server::incomingConnection(qintptr socketDescriptor) {
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);

    connect(socket, &QTcpSocket::readyRead, this, &server::readFromClient);

    qDebug() << "new client is connected on socket " << socketDescriptor;
}

void server::readFromClient() {
    socket = (QTcpSocket*)sender();

    QByteArray array;

    array = socket->readAll();
    qDebug() << array;
}
