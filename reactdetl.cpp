#include "reactdetl.h"
#include "ui_reactdetl.h"
#include "frontend.h"
#include "readfile.h"

#include <QMessageBox>
#include <QDesktopServices>

ReactDetl::ReactDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReactDetl)
{
    ui->setupUi(this);
    setWindowTitle("ReactJS");
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/reactjs.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

ReactDetl::~ReactDetl()
{
    delete ui;
}

//go to website button
void ReactDetl::on_pushButton_2_clicked()
{
    //To open a browser from a link
    QString link = "https://reactjs.org/tutorial/tutorial.html";
    QDesktopServices::openUrl(QUrl(link));
}

//go back button
void ReactDetl::on_pushButton_clicked()
{
    FrontEnd FrontEnd;
    close();
    FrontEnd.exec();
}

