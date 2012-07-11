// client.cpp
// Delta3 project -- Universal remote control system

#include <QDebug>
#include "client.h"

//------------------------------------------------------------------------------
Client::Client( QObject* parent, const QString& clientHash, qint32 id ):
    QObject( parent ),
    clientIdHash_( clientHash ),
    clientId_( id )
{
    qDebug() << clientId_ << clientIdHash_;
}
//------------------------------------------------------------------------------
QString Client::getHash() const
{
    return clientIdHash_;
}
//------------------------------------------------------------------------------
qint32 Client::getId() const
{
    return clientId_;
}
//------------------------------------------------------------------------------
