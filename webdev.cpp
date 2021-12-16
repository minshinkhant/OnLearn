#include "webdev.h"
#include "ui_webdev.h"
#include "frontend.h"
#include "backend.h"
#include "fullstack.h"
#include "mainmenu.h"

WebDev::WebDev(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WebDev)
{
    ui->setupUi(this);
    setWindowTitle("Web Development");

}

WebDev::~WebDev()
{
    delete ui;
}

//FrontEnd button
void WebDev::on_pushButton_clicked()
{
    FrontEnd FrontEnd;
    //frontend.setModal(true);
    close();
    FrontEnd.exec();

}

//BackEnd button
void WebDev::on_pushButton_2_clicked()
{
    BackEnd BackEnd;
    close();
    BackEnd.exec();
}

//FullStack button
void WebDev::on_pushButton_3_clicked()
{
    FullStack FullStack;
    close();
    FullStack.exec();
}

//Go back button
void WebDev::on_pushButton_4_clicked()
{
    MainMenu Menu;
    close();
    Menu.exec();


}

