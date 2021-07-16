#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pB1_clicked();

    void on_pB2_clicked();

    void on_pB3_clicked();

    void on_pB4_clicked();

    void on_pB5_clicked();

    void on_pB6_clicked();

    void on_pB7_clicked();

    void on_pB8_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
