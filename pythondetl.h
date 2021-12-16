#ifndef PYTHONDETL_H
#define PYTHONDETL_H

#include <QDialog>

namespace Ui {
class PythonDetl;
}

class PythonDetl : public QDialog
{
    Q_OBJECT

public:
    explicit PythonDetl(QWidget *parent = nullptr);
    ~PythonDetl();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::PythonDetl *ui;
};

#endif // PYTHONDETL_H
