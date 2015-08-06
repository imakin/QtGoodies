#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bt = new AeroButton(this);
    bt->setGeometry(50,50,40,40);
    bt->setText("Gaul");
    bt->show();

    bt_RoundButton = new RoundButton(this);
    bt_RoundButton->setGeometry(50,120,50,50);
    bt_RoundButton->setText("x");
    bt_RoundButton->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
