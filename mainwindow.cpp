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
    ui->scrollArea->ensureVisible(0,2205, 20, 1);
    ui->scrollArea->ensureVisible(0,2205+950, 20, 1);
}

void MainWindow::on_pB3_clicked()
{
    ui->scrollArea->ensureVisible(0,3195, 20, 1);
    ui->scrollArea->ensureVisible(0,3195+950, 20, 1);
}

void MainWindow::on_pB4_clicked()
{
    ui->scrollArea->ensureVisible(0,6270, 20, 1);
    ui->scrollArea->ensureVisible(0,6270+950, 20, 1);
}

void MainWindow::on_pB5_clicked()
{
    ui->scrollArea->ensureVisible(0,7950, 20, 1);
    ui->scrollArea->ensureVisible(0,7950+950, 20, 1);
}

void MainWindow::on_pB6_clicked()
{
    ui->scrollArea->ensureVisible(0,9389, 20, 1);
    ui->scrollArea->ensureVisible(0,9389+950, 20, 1);
}

void MainWindow::on_pB7_clicked()
{
    ui->scrollArea->ensureVisible(0,10409, 20, 1);
    ui->scrollArea->ensureVisible(0,10409+950, 20, 1);
}

void MainWindow::on_pB8_clicked()
{
    ui->scrollArea->ensureVisible(0,12987, 20, 1);
    ui->scrollArea->ensureVisible(0,12987+950, 20, 1);
}

