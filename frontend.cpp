#include "frontend.h"
#include "ui_frontend.h"
#include "htmlcssdetail.h"
#include "javascriptdetl.h"
#include "webdev.h"
#include "reactdetl.h"


FrontEnd::FrontEnd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrontEnd)
{
    ui->setupUi(this);
    setWindowTitle("FrontEnd");
}

FrontEnd::~FrontEnd()
{
    delete ui;
}

//Html/Css Button
void FrontEnd::on_pushButton_clicked()
{
    HtmlCssDetail HtmlCss;
    //Html_Css.setModal(true);
    close();
    HtmlCss.exec();
}


//go back button
void FrontEnd::on_pushButton_4_clicked()
{
    WebDev WebDev;
    close();
    WebDev.exec();
}

//javascript button
void FrontEnd::on_pushButton_2_clicked()
{
    JavascriptDetl JSDetl;
    close();
    JSDetl.exec();
}

//react button
void FrontEnd::on_pushButton_3_clicked()
{
    ReactDetl ReactDetl;
    close();
    ReactDetl.exec();
}

