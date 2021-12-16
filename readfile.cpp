#include "readfile.h"

ReadFile::ReadFile()
{

}


QString ReadFile::LoadTxtFile(QString FileName)
{


    QFile inputFile(FileName);
    if (!inputFile.open(QIODevice::ReadOnly))
    {
        throw 10;
    }
    QTextStream in(&inputFile);
    QString line=in.readAll();
    inputFile.close();
    return line;

}
