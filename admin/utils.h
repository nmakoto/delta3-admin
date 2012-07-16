// utils.h
// Delta3 project -- Universal remote control system

#pragma once

#include <QtGlobal>
#include <QByteArray>
#include <QDebug>

//------------------------------------------------------------------------------
template <typename T>
QByteArray toBytes( T num )
{
    QByteArray result;
    result.append( (char*)(&num), sizeof(T) );
    return result;
}
//------------------------------------------------------------------------------
template <typename T>
T fromBytes( const QByteArray& array )
{
    if( array.size() != sizeof(T) )
    {
        qDebug() << "fromBytes(): error";
        return 0;
    }

    const T* tmp = ( reinterpret_cast<const T*>(array.data()) );
    return *tmp;
}
//------------------------------------------------------------------------------
