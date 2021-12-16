#ifndef BACKEND_H
#define BACKEND_H

#include <QDialog>

namespace Ui {
class BackEnd;
}

class BackEnd : public QDialog
{
    Q_OBJECT

public:
    explicit BackEnd(QWidget *parent = nullptr);
    ~BackEnd();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::BackEnd *ui;
};

#endif // BACKEND_H
