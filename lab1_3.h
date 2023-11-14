#ifndef LAB1_3_H
#define LAB1_3_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class lab1_3; }
QT_END_NAMESPACE

class lab1_3 : public QMainWindow
{
    Q_OBJECT

public:
    lab1_3(QWidget *parent = nullptr);
    ~lab1_3();

private slots:
    void on_pushButton_clicked();

    void on_pushButtonCount_clicked();

private:
    Ui::lab1_3 *ui;
};
#endif // LAB1_3_H
