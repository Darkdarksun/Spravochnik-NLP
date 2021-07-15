#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QScrollBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->label->setWordWrap(true);
    ui->label->setAlignment(Qt::AlignJustify);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pB1_clicked()
{
    ui->scrollArea->ensureVisible(0,0, 20, 950);
}

void MainWindow::on_pB2_clicked()
{
    ui->scrollArea->ensureVisible(0,2200, 20, 1);
    ui->scrollArea->ensureVisible(0,2200+950, 20, 1);
}

void MainWindow::on_pB3_clicked()
{
    ui->scrollArea->ensureVisible(0,3180, 20, 1);
    ui->scrollArea->ensureVisible(0,3180+950, 20, 1);
}

void MainWindow::on_pB4_clicked()
{
    ui->scrollArea->ensureVisible(0,5967, 20, 1);
    ui->scrollArea->ensureVisible(0,5967+950, 20, 1);
}

void MainWindow::on_pB5_clicked()
{
    ui->scrollArea->ensureVisible(0,7567, 20, 1);
    ui->scrollArea->ensureVisible(0,7567+950, 20, 1);
}

void MainWindow::on_pB6_clicked()
{
    ui->scrollArea->ensureVisible(0,8736, 20, 1);
    ui->scrollArea->ensureVisible(0,8736+950, 20, 1);
}

void MainWindow::on_pB7_clicked()
{
    ui->scrollArea->ensureVisible(0,9576, 20, 1);
    ui->scrollArea->ensureVisible(0,9576+950, 20, 1);
}

void MainWindow::on_pB8_clicked()
{
    ui->scrollArea->ensureVisible(0,11772, 20, 1);
    ui->scrollArea->ensureVisible(0,11772+950, 20, 1);
       int pixels=ui->scrollArea->verticalScrollBar()->value();//проверка положения скроллбара для настройки глав
       qDebug()<<pixels;
}

//void MainWindow::on_pushButton_clicked()
//{

//}