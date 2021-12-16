#ifndef FULLSTACK_H
#define FULLSTACK_H

#include <QDialog>

namespace Ui {
class FullStack;
}

class FullStack : public QDialog
{
    Q_OBJECT

public:
    explicit FullStack(QWidget *parent = nullptr);
    ~FullStack();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::FullStack *ui;
};

#endif // FULLSTACK_H
