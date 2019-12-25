#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <kv.h>

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


void MainWindow::on_pushButton_clicked()
{
    kv a;
    ui->Result->setText(a.set(ui->a->text(),ui->b->text(),ui->c->text()));
}
