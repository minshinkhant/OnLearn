#ifndef FRONTEND_H
#define FRONTEND_H

#include <QDialog>

namespace Ui {
class FrontEnd;
}

class FrontEnd : public QDialog
{
    Q_OBJECT

public:
    explicit FrontEnd(QWidget *parent = nullptr);
    ~FrontEnd();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::FrontEnd *ui;
};

#endif // FRONTEND_H
