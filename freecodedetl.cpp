#include "freecodedetl.h"
#include "ui_freecodedetl.h"
#include "fullstack.h"
#include "readfile.h"

#include <QMessageBox>
#include <QDesktopServices>

FreecodeDetl::FreecodeDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FreecodeDetl)
{
    ui->setupUi(this);
    setWindowTitle("FreeCodeCamp");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/freecodecamp.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

FreecodeDetl::~FreecodeDetl()
{
    delete ui;
}

//go to website button
void FreecodeDetl::on_pushButton_2_clicked()
{
    QString link = "https://www.freecodecamp.org/";
    QDesktopServices::openUrl(QUrl(link));
}

//go back button
void FreecodeDetl::on_pushButton_clicked()
{
    FullStack FullStack;
    close();
    FullStack.exec();

}

