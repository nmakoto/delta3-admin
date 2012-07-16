// main.cpp
// Delta3 project -- Universal remote control system

#include <QApplication>
#include "mainwindow.h"

//------------------------------------------------------------------------------
int main( int argc, char* argv[] )
{
    QApplication a( argc, argv );
    MainWindow w;
    w.show();

    return a.exec();
}
//------------------------------------------------------------------------------
