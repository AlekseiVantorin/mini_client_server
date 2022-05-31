#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QDataStream>

class server: public QTcpServer {
    Q_OBJECT

public:
    server();

    QTcpSocket* socket;

public slots:
    void incomingConnection(qintptr socketDescriptor);
    void readFromClient();
};

#endif // MYSERVER_H
