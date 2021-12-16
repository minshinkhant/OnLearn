#include "javascriptdetl.h"
#include "ui_javascriptdetl.h"
#include "frontend.h"

#include "readfile.h"

#include <QMessageBox>
#include <QDesktopServices>

JavascriptDetl::JavascriptDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JavascriptDetl)
{
    ui->setupUi(this);
    setWindowTitle("JavaScript");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/javascript.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

JavascriptDetl::~JavascriptDetl()
{
    delete ui;
}

//go to website button
void JavascriptDetl::on_pushButton_2_clicked()
{
    //To open a browser from a link
    QString link = "https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/";
    QDesktopServices::openUrl(QUrl(link));
}

//go back button
void JavascriptDetl::on_pushButton_clicked()
{
    FrontEnd FrontEnd;
    close();
    FrontEnd.exec();
}

