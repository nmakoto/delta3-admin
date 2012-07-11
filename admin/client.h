// client.h
// Delta3 project -- Universal remote control system

#pragma once

#include <QObject>
#include <QString>

//------------------------------------------------------------------------------
class Client : public QObject
{
    Q_OBJECT
public:
    Client( QObject* parent, const QString& clientHash, qint32 id );
    QString getHash() const;
    qint32 getId() const;

private:
    QString clientIdHash_;
    qint32 clientId_;
};
//------------------------------------------------------------------------------
