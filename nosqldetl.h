#ifndef NOSQLDETL_H
#define NOSQLDETL_H

#include <QDialog>

namespace Ui {
class NoSqlDetl;
}

class NoSqlDetl : public QDialog
{
    Q_OBJECT

public:
    explicit NoSqlDetl(QWidget *parent = nullptr);
    ~NoSqlDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::NoSqlDetl *ui;
};

#endif // NOSQLDETL_H
