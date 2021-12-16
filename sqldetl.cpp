#include "sqldetl.h"
#include "ui_sqldetl.h"
#include "readfile.h"
#include "database.h"

#include <QMessageBox>
#include <QDesktopServices>

SQLDetl::SQLDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SQLDetl)
{
    ui->setupUi(this);
    setWindowTitle("SQL");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/sql.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

SQLDetl::~SQLDetl()
{
    delete ui;
}

//go to website button
void SQLDetl::on_pushButton_2_clicked()
{
    QString link = "https://www.w3schools.com/sql/";
    QDesktopServices::openUrl(QUrl(link));
}



void SQLDetl::on_pushButton_clicked()
{
    DataBase DataBase;
    close();
    DataBase.exec();
}

