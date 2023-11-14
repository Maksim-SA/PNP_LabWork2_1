#include "lab1_3.h"
#include "ui_lab1_3.h"
#include <QMessageBox>

lab1_3::lab1_3(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lab1_3)
{
    ui->setupUi(this);
}

lab1_3::~lab1_3()
{
    delete ui;
}


void lab1_3::on_pushButton_clicked()
{
    QString firstNumStr = ui->lineEdit_firstNum->text();
    QString secondNumStr = ui->lineEdit_SecNum->text();
    QString thirdNumStr = ui->lineEdit_ThirdNum->text();
    bool ok;

    float firstNum = firstNumStr.toFloat(&ok);
    if(!ok) {
        QMessageBox::information(this, "Ошибка", "Введите число!");
        return;
    }
    float secondNum = secondNumStr.toFloat(&ok);
    if(!ok) {
        QMessageBox::information(this, "Ошибка", "Введите число!");
        return;
    }
    float thirdNum = thirdNumStr.toFloat(&ok);
    if(!ok) {
        QMessageBox::information(this, "Ошибка", "Введите число!");
        return;
    }
    int max;
    if (firstNum >= secondNum){
        if (firstNum >= thirdNum){
            max = firstNum;
        }
        else {
            max = thirdNum;
        }
    }
    else {
        if (secondNum >= thirdNum){
            max = secondNum;
        }
        else {
            max = thirdNum;
        }
    }
    if (max == firstNum) {
        max = secondNum - thirdNum;
    }
    else if (max == secondNum) {
        max = firstNum - thirdNum;
    }
    else if (max == thirdNum) {
        max = firstNum - secondNum;
    }

    ui->label_Result->setText(QString::number(max));
}


void lab1_3::on_pushButtonCount_clicked()
{
    QString ANumStr = ui->lineEdit_Anum->text();
    QString BNumStr = ui->lineEdit_Bnum->text();
    bool ok;

    float ANum = ANumStr.toFloat(&ok);
    if(!ok) {
        QMessageBox::information(this, "Ошибка", "Введите число!");
        return;
    }
    float BNum = BNumStr.toFloat(&ok);
    if(!ok) {
        QMessageBox::information(this, "Ошибка", "Введите число!");
        return;
    }
    int max = ANum;
    if (ANum >= BNum){
        max = ANum;
    }
    else {
        max = BNum;
    }
    if (ANum == BNum) {
        ANum = 0;
        BNum = 0;
    }
    if (ANum != BNum) {
        ANum = max;
        BNum = max;
    }
    ui->lineEdit_Anum->setText(QString::number(ANum));
    ui->lineEdit_Bnum->setText(QString::number(BNum));
}
