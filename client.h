#ifndef CLIENT_H
#define CLIENT_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QDataStream>

class client : public QObject
{

public:
    client();

    QTcpSocket* socket;

private:
    void sendToServer();
};

#endif // CLIENT_H
