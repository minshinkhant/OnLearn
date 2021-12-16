#include "onlearn.h"
#include "ui_onlearn.h"
#include "mainmenu.h"
#include "readfile.h"


#include <QMessageBox>


Onlearn::Onlearn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Onlearn)
{
    ui->setupUi(this);
    setWindowTitle("OnLearn");
    setWindowIcon(QIcon("qrc:/../icon.jpg"));
    //setWindowIcon(QIcon(":/../icon.jpg"));
    //alignLeftAction->setIcon(QIcon(":/icons/alignLeft.png"));
    setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    setFixedSize(660,460);
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/onlearn.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }

}



Onlearn::~Onlearn()
{
    delete ui;
}

//web development button
void Onlearn::on_pushButton_clicked()
{
    //not to be able to click the menu window
    MainMenu Menu;
    //webdev.setModal(true);
    Menu.exec();

    //hide(); to hide the menu window

}

//To open a new window
//    QWidget *wdg = new QWidget;
//    wdg->show();
//    hide();//this will disappear main window
       //ui->label->setText();
//To open a browser from a link
//    QString link = "http://www.google.com";
//    QDesktopServices::openUrl(QUrl(link));

//about page
void Onlearn::on_actionAbout_triggered()
{
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/about.txt");
        ui->textBrowser->setPlainText(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

//quit button from menu bar
void Onlearn::on_actionQuit_triggered()
{
    QApplication::quit();
}

//close button
void Onlearn::on_pushButton_2_clicked()
{
    QApplication::quit();
}


void Onlearn::on_actionHome_triggered()
{
    try {
        ReadFile TxtFile;
        QString txt = TxtFile.LoadTxtFile(":/txtFiles/onlearn.txt");
        ui->textBrowser->setHtml(txt);

    }  catch (int err) {

        QMessageBox messageBox;
        messageBox.critical(0,"Error","An error has occured !");
        messageBox.setFixedSize(500,200);
    }
}

