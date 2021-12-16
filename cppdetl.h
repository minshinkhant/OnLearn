#ifndef CPPDETL_H
#define CPPDETL_H

#include <QDialog>

namespace Ui {
class CppDetl;
}

class CppDetl : public QDialog
{
    Q_OBJECT

public:
    explicit CppDetl(QWidget *parent = nullptr);
    ~CppDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::CppDetl *ui;
};

#endif // CPPDETL_H
