#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonExecutar_clicked()
{
    QString teste = ui->lineEditNumero->text();
    int num;
    num = teste.toInt();
    int base = 0;
    if(ui->comboBoxBase->currentIndex() == 0) base = 2;
    if(ui->comboBoxBase->currentIndex() == 1) base = 8;
    if(ui->comboBoxBase->currentIndex() == 2) base = 16;
    ce::Conversor a(num, base);
    ui->textEditSaida->setText(a.Converter());
}

