
#include <QCoreApplication>
#include <QDebug>
#include <QSerialPortInfo>
#include <QSerialPort>
#include "AH127Cprotocol.h"
;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    AH127Cprotocol protocol ("COM8");

    return a.exec();
}
