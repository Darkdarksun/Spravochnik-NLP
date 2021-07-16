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
    ui->scrollArea->ensureVisible(0,6333, 20, 1);
    ui->scrollArea->ensureVisible(0,6333+950, 20, 1);
}

void MainWindow::on_pB5_clicked()
{
    ui->scrollArea->ensureVisible(0,8020, 20, 1);
    ui->scrollArea->ensureVisible(0,8020+950, 20, 1);
}

void MainWindow::on_pB6_clicked()
{
    ui->scrollArea->ensureVisible(0,9459, 20, 1);
    ui->scrollArea->ensureVisible(0,9459+950, 20, 1);
}

void MainWindow::on_pB7_clicked()
{
    ui->scrollArea->ensureVisible(0,10479, 20, 1);
    ui->scrollArea->ensureVisible(0,10479+950, 20, 1);
}

void MainWindow::on_pB8_clicked()
{
    ui->scrollArea->ensureVisible(0,13084, 20, 1);
    ui->scrollArea->ensureVisible(0,13084+950, 20, 1);
}

void MainWindow::on_pushButton_clicked()
{
    int pixels=ui->scrollArea->verticalScrollBar()->value();//проверка положения скроллбара для настройки глав
    qDebug()<<pixels;
}
