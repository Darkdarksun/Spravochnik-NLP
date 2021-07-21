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


void MainWindow::on_pushButton_clicked()
{
    if (check==0){
        int winsize=ui->centralwidget->height()+25;
        ui->label_2->hide();
        ui->pB1->hide();
        ui->pB2->hide();
        ui->pB3->hide();
        ui->pB4->hide();
        ui->pB5->hide();
        ui->pB6->hide();
        ui->pB7->hide();
        ui->pB8->hide();
        ui->scrollArea->move(0,0);
        ui->pushButton->setText(">>");
        check=1;
        this->resize(900,winsize);
    }
    else {
        ui->label_2->show();
        ui->pB1->show();
        ui->pB2->show();
        ui->pB3->show();
        ui->pB4->show();
        ui->pB5->show();
        ui->pB6->show();
        ui->pB7->show();
        ui->pB8->show();
        ui->pushButton->setText("<<");
        check=0;
    }
}
