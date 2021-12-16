#ifndef ONLEARN_H
#define ONLEARN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Onlearn; }
QT_END_NAMESPACE

class Onlearn : public QMainWindow
{
    Q_OBJECT

public:
    Onlearn(QWidget *parent = nullptr);
    ~Onlearn();

private slots:
    void on_pushButton_clicked();



    void on_actionAbout_triggered();

    void on_actionQuit_triggered();

    void on_pushButton_2_clicked();

    void on_actionHome_triggered();

private:
    Ui::Onlearn *ui;
};
#endif // ONLEARN_H
