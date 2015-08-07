#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    bt_RoundButton = new RoundButton(this);
    bt_RoundButton->setGeometry(0,0,50,50);
    bt_RoundButton->setText("x");
    bt_RoundButton->show();

    QFrame* sliderC = new QFrame(this);
    sliderC->setGeometry(0,60,200,200);
    sliderC->show();

    slider = new Slider(sliderC);

    QFrame* f1 = new QFrame(slider);
    f1->setGeometry(0,0,200,200);
    f1->setStyleSheet("background-color:#ff0000;");
    f1->show();
    QFrame* f2 = new QFrame(slider);
    f2->setGeometry(200,0,200,200);
    f2->setStyleSheet("background-color:#00ff00;");
    f2->show();

    slider->autoSize();
    slider->show();

    connect(bt_RoundButton,SIGNAL(clicked(bool)),this,SLOT(scrollkanan(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::scrollkanan(bool checked)
{
    slider->slide(Slider::SLIDE_DIRECTION_LEFT);
}
