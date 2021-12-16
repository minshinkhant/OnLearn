#include "nosqldetl.h"
#include "ui_nosqldetl.h"
#include "readfile.h"
#include "database.h"

#include <QMessageBox>
#include <QDesktopServices>

NoSqlDetl::NoSqlDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NoSqlDetl)
{
    ui->setupUi(this);
    setWindowTitle("NoSQL");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/nosql.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

NoSqlDetl::~NoSqlDetl()
{
    delete ui;
}

//go to web button
void NoSqlDetl::on_pushButton_2_clicked()
{
    QString link = "https://www.mongodb.com/nosql-explained";
    QDesktopServices::openUrl(QUrl(link));
}



void NoSqlDetl::on_pushButton_clicked()
{
    DataBase DataBase;
    close();
    DataBase.exec();
}
