#include "demo1_slider.h"

Demo1_Slider::Demo1_Slider(QWidget* parent, QFrame* container):
    QWidget(parent),
    demo1Container(container)
{
    /** SLIDER DEMO **/
    //-- create the container, can be QFrame or any derivative of that
    sliderContainer = new HoverFrame(demo1Container);
    sliderContainer->setGeometry(200,60,960,533);
    sliderContainer->show();

    //-- create the slider
    slider = new Slider(sliderContainer);

    //-- create its pages
    QFrame* f1 = new QFrame(slider);
    f1->setStyleSheet("background-image:url(:/i/m.jpg);");
    QFrame* f2 = new QFrame(slider);
    f2->setStyleSheet("background-image:url(:/i/rftl.jpg);");
    QFrame* f3 = new QFrame(slider);
    f3->setStyleSheet("background-image:url(:/i/plang2.jpg);");

    //-- add those pages
    slider->addPage(Slider::APPEND_RIGHT_MOST,f1);
    slider->addPage(Slider::APPEND_RIGHT_MOST,f2);
    slider->addPage(Slider::APPEND_RIGHT_MOST,f3);

    slider->show();

    /** USAGE SLIDER DEMO */
    RoundButton* bt_scrollLeft = new RoundButton(demo1Container);
    bt_scrollLeft->setGeometry(sliderContainer->geometry().left(),600,50,50);
    bt_scrollLeft->setText("<<");
    bt_scrollLeft->show();

    RoundButton* bt_scrollRight = new RoundButton(demo1Container);
    bt_scrollRight->setGeometry(sliderContainer->geometry().left()+sliderContainer->geometry().width()-50,600,50,50);
    bt_scrollRight->setText(">>");
    bt_scrollRight->show();

    connect(bt_scrollRight,SIGNAL(clicked(bool)),this,SLOT(scrollRight(bool)));
    connect(bt_scrollLeft,SIGNAL(clicked(bool)),this,SLOT(scrollLeft(bool)));

    //-- We want the slider to auto scroll within certain time,
    t_scrollDemo = new QTimer(this);
    connect(t_scrollDemo,SIGNAL(timeout()),this,SLOT(s_scrollDemo()));
    t_scrollDemo->start(3000);
    //-- we want to stop scrolling when mouse is around
    connect(sliderContainer,SIGNAL(onHover()),this,SLOT(s_scrollStop()));
    connect(sliderContainer,SIGNAL(onLeave()),this,SLOT(s_scrollStart()));
}

void Demo1_Slider::scrollRight(bool checked)
{
    Q_UNUSED(checked);
    t_scrollDemo->stop();//-- reset timer
    t_scrollDemo->start(3000);
    slider->scroll(Slider::SCROLL_DIRECTION_RIGHT);
}

void Demo1_Slider::scrollLeft(bool checked)
{
    Q_UNUSED(checked);
    t_scrollDemo->stop();
    t_scrollDemo->start(3000);
    slider->scroll(Slider::SCROLL_DIRECTION_LEFT);
}

void Demo1_Slider::s_scrollDemo()
{
    if (! slider->isLastPage())
        slider->scroll(Slider::SCROLL_DIRECTION_RIGHT);
    else
    {
        slider->scroll(Slider::SCROLL_DIRECTION_LEFT);
        slider->scroll(Slider::SCROLL_DIRECTION_LEFT);
    }
}
void Demo1_Slider::s_scrollStart()
{
    t_scrollDemo->start(3000);
}
void Demo1_Slider::s_scrollStop()
{
    t_scrollDemo->stop();
}

