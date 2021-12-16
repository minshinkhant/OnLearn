#ifndef READFILE_H
#define READFILE_H

#include <QFile>
#include <QTextStream>


class ReadFile
{
public:
    ReadFile();
    QString LoadTxtFile(QString);
};

#endif // READFILE_H
