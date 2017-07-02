#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calculator.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    calculator.enterDigit('1');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_2_clicked()
{
    calculator.enterDigit('2');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_3_clicked()
{
    calculator.enterDigit('3');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_4_clicked()
{
    calculator.enterDigit('4');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_5_clicked()
{
    calculator.enterDigit('5');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_6_clicked()
{
    calculator.enterDigit('6');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_7_clicked()
{
    calculator.enterDigit('7');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_8_clicked()
{
    calculator.enterDigit('8');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_9_clicked()
{
    calculator.enterDigit('9');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_0_clicked()
{
    calculator.enterDigit('0');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_clear_clicked()
{
    calculator.clear();
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_add_clicked()
{
    calculator.setOperation('+');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_substract_clicked()
{
    calculator.setOperation('-');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_multiply_clicked()
{
    calculator.setOperation('*');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_divide_clicked()
{
    calculator.setOperation('/');
    ui->lineEdit->setText(calculator.getDisplay());
}

void MainWindow::on_pushButton_result_clicked()
{
    calculator.applyOperation();
    ui->lineEdit->setText(calculator.getDisplay());
}
