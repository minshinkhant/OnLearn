#ifndef DATABASE_H
#define DATABASE_H

#include <QDialog>

namespace Ui {
class DataBase;
}

class DataBase : public QDialog
{
    Q_OBJECT

public:
    explicit DataBase(QWidget *parent = nullptr);
    ~DataBase();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::DataBase *ui;
};

#endif // DATABASE_H
