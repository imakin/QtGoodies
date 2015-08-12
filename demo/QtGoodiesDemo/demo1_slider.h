#ifndef DEMO1_SLIDER_H
#define DEMO1_SLIDER_H

#include <QDebug>
#include <QtCore>
#include <QtGui>
#include <QFrame>
#include "../../goodies/roundbutton/roundbutton.h"
#include "../../goodies/slider/slider.h"
#include "../../goodies/hoverframe/hoverframe.h"

class Demo1_Slider: public QWidget
{
    Q_OBJECT
public:
    Demo1_Slider(QWidget* parent=0, QFrame* container=0);

private:
    QFrame *demo1Container;
    RoundButton *bt_RoundButton;
    HoverFrame* sliderContainer;
    Slider* slider;
    QTimer* t_scrollDemo;


private slots:
    void scrollLeft(bool checked);
    void scrollRight(bool checked);
    void s_scrollDemo();
    void s_scrollStart();
    void s_scrollStop();
};

#endif // DEMO1_SLIDER_H
