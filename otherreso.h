#ifndef OTHERRESO_H
#define OTHERRESO_H

#include <QDialog>

namespace Ui {
class OtherReso;
}

class OtherReso : public QDialog
{
    Q_OBJECT

public:
    explicit OtherReso(QWidget *parent = nullptr);
    ~OtherReso();

private slots:
    //void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::OtherReso *ui;
};

#endif // OTHERRESO_H
