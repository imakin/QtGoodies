#include "roundbutton.h"

RoundButton::RoundButton(QWidget *parent,
                         QString col1,
                         QString col2
                         ) :
    HoverButton(parent)
{
    this->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.45 rgba(0,0,0,155), stop:0.46 rgba(255,255,255,155) );");
    this->setFlat(true);

    av_bgrad = 0; //-- radius of its animated zoomed-in backgroud
    av_bgradSpeed = 2; //-- size increase animation speed of the radius
    av_bgradDelay = 15; //-- delay animation speed
    ati_bgrad = new QTimer(this);
    ato_bgrad = new QTimer(this);

    connect(this,SIGNAL(onhover()),this,SLOT(hover()));
    connect(this,SIGNAL(onleave()),this,SLOT(leave()));
    connect(ati_bgrad,SIGNAL(timeout()),this,SLOT(asi_bgrad()));
    connect(ato_bgrad,SIGNAL(timeout()),this,SLOT(aso_bgrad()));
}

void RoundButton::paintEvent(QPaintEvent *e)
{
    QRect brect = this->geometry();
    W = brect.width()-1;
    H = brect.height()-1;
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    //-- draw its outline
    painter.setPen(QPen(QBrush(QColor::fromRgba(0xff84b9d7)), 1.0));
    painter.drawArc(1,1,W-1,H-1,0,360*16);

    //-- draw its animated zoomed in background
    painter.setBrush(QBrush(QColor::fromRgba(0xff84b9d7)));
    painter.setPen(QColor::fromRgba(0x00ffffff));
    painter.drawEllipse(QPointF(W/2.0,H/2.0),av_bgrad,av_bgrad);

    //-- draw the text if any
    QString text = this->text();
    if(!text.isNull())
    {
        QFont font = this->font();
        painter.setFont(font);
        painter.setPen(QColor::fromRgba(0x88000000));
        painter.setOpacity(1.0);
        painter.drawText(1, 1, W, H, Qt::AlignHCenter|Qt::AlignVCenter, text);
    }

    //-- draw its icon
    QIcon icon = this->icon();
    if (!icon.isNull())
    {

    }


    //QPushButton::paintEvent(e);
}

void RoundButton::hover()
{
    ato_bgrad->stop();
    ati_bgrad->start(av_bgradDelay);
}

void RoundButton::leave()
{
    ati_bgrad->stop();
    ato_bgrad->start(av_bgradDelay);
}

void RoundButton::asi_bgrad()
{
    if (av_bgrad<W/2)
        av_bgrad+= av_bgradSpeed;
    else
        ati_bgrad->stop();
    update();
}

void RoundButton::aso_bgrad()
{
    if (av_bgrad>1)
        av_bgrad-= av_bgradSpeed;
    else
        ato_bgrad->stop();
    update();
}
