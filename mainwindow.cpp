#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QScrollBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pB1_clicked()
{
    ui->scrollArea->ensureVisible(0,0, 20, 1);
}

void MainWindow::on_pB2_clicked()
{
    ui->scrollArea->ensureVisible(0,2500, 20, 1);
}
