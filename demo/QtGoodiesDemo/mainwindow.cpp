#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->showMaximized();

    QFrame* gaul = new QFrame(this);
    Demo1_Slider* demo1 = new Demo1_Slider(this, gaul);
    (void)demo1;
    gaul->setGeometry(0,0,1366,768);
    gaul->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
