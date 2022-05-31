#include "client.h"

client::client() {
    socket = new QTcpSocket;
    socket->connectToHost("srv13.yeputons.net", 8418);
//    socket->connectToHost("127.0.0.1", 80);

    qDebug() << "start";

    sendToServer();
}

void client::sendToServer() {
    socket->write("from client");
}
