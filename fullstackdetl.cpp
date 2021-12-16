#include "fullstackdetl.h"
#include "ui_fullstackdetl.h"

FullstackDetl::FullstackDetl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FullstackDetl)
{
    ui->setupUi(this);
}

FullstackDetl::~FullstackDetl()
{
    delete ui;
}
