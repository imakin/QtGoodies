#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QFrame* sliderC = new QFrame(this);
    sliderC->setGeometry(0,60,200,200);
    sliderC->show();

    slider = new Slider(this);

    QFrame* f1 = new QFrame(slider);
    f1->setStyleSheet("background-color:#ff0000;");
    QFrame* f2 = new QFrame(slider);
    f2->setStyleSheet("background-color:#00ff00;");

    slider->addPage(Slider::APPEND_RIGHT_MOST,f1);
    slider->addPage(Slider::APPEND_RIGHT_MOST,f2);
    slider->autoSize();
    slider->show();

    bt_RoundButton = new RoundButton(this);
    bt_RoundButton->setGeometry(0,0,50,50);
    bt_RoundButton->setText("x");
    bt_RoundButton->show();
    RoundButton* bt2 = new RoundButton(this);
    bt2->setGeometry(0,200,50,50);
    bt2->setText(">>");
    bt2->show();
    connect(bt_RoundButton,SIGNAL(clicked(bool)),this,SLOT(scrollkanan(bool)));
    connect(bt2,SIGNAL(clicked(bool)),this,SLOT(scrollkiri(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::scrollkanan(bool checked)
{
    Q_UNUSED(checked);
    slider->slide(Slider::SLIDE_DIRECTION_LEFT);
}

void MainWindow::scrollkiri(bool checked)
{
    Q_UNUSED(checked);
    slider->slide(Slider::SLIDE_DIRECTION_RIGHT);
}
