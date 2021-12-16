#ifndef DJANGODETL_H
#define DJANGODETL_H

#include <QDialog>

namespace Ui {
class DjangoDetl;
}

class DjangoDetl : public QDialog
{
    Q_OBJECT

public:
    explicit DjangoDetl(QWidget *parent = nullptr);
    ~DjangoDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::DjangoDetl *ui;
};

#endif // DJANGODETL_H
