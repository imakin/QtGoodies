#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    bt_RoundButton = new RoundButton(this);
    bt_RoundButton->setGeometry(50,120,50,50);
    bt_RoundButton->setText("x");
    bt_RoundButton->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
