#ifndef PROGRAMMINGLANGUAGES_H
#define PROGRAMMINGLANGUAGES_H

#include <QDialog>

namespace Ui {
class ProgrammingLanguages;
}

class ProgrammingLanguages : public QDialog
{
    Q_OBJECT

public:
    explicit ProgrammingLanguages(QWidget *parent = nullptr);
    ~ProgrammingLanguages();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ProgrammingLanguages *ui;
};

#endif // PROGRAMMINGLANGUAGES_H
