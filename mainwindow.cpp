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
    int winsize=ui->scrollArea->height();
    ui->scrollArea->ensureVisible(0,2205, 20, 1);
    ui->scrollArea->ensureVisible(0,2205+winsize, 20, 1);
}

void MainWindow::on_pB3_clicked()
{
    int winsize=ui->scrollArea->height();
    ui->scrollArea->ensureVisible(0,3195, 20, 1);
    ui->scrollArea->ensureVisible(0,3195+winsize, 20, 1);
}

void MainWindow::on_pB4_clicked()
{
    int winsize=ui->scrollArea->height();
    ui->scrollArea->ensureVisible(0,6270, 20, 1);
    ui->scrollArea->ensureVisible(0,6270+winsize, 20, 1);
}

void MainWindow::on_pB5_clicked()
{
    int winsize=ui->scrollArea->height();
    ui->scrollArea->ensureVisible(0,7950, 20, 1);
    ui->scrollArea->ensureVisible(0,7950+winsize, 20, 1);
}

void MainWindow::on_pB6_clicked()
{
    int winsize=ui->scrollArea->height();
    ui->scrollArea->ensureVisible(0,9389, 20, 1);
    ui->scrollArea->ensureVisible(0,9389+winsize, 20, 1);
}

void MainWindow::on_pB7_clicked()
{
    int winsize=ui->scrollArea->height();
    ui->scrollArea->ensureVisible(0,10409, 20, 1);
    ui->scrollArea->ensureVisible(0,10409+winsize, 20, 1);
}

void MainWindow::on_pB8_clicked()
{
    int winsize=ui->scrollArea->height();
    ui->scrollArea->ensureVisible(0,12987, 20, 1);
    ui->scrollArea->ensureVisible(0,12987+winsize, 20, 1);
}

