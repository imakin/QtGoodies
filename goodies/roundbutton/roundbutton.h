#ifndef ROUNDBUTTON_H
#define ROUNDBUTTON_H

#include <QDebug>
#include <QtCore>
#include <QtGui>
#include <QPushButton>
#include "../hoverbutton/hoverbutton.h"
#include <QStyle>
#include <QString>

class RoundButton : public HoverButton
{
    Q_OBJECT
public:
    explicit RoundButton(QWidget *parent = 0,
                         QString col1="rgba(58, 107, 115, 155)",
                         QString col2="rgba(255, 255, 255, 0)"
                         );

private:
    int W;//--geometry Width & Height in drawable area (minus antialiasing edge ~2)
    int H;
    QString pcol1;
    QString pcol2;
    int av_bgrad;
    int av_bgradSpeed;
    int av_bgradDelay;
    QTimer *ati_bgrad;
    QTimer *ato_bgrad;


private slots:
    void asi_bgrad();
    void aso_bgrad();
    void hover();
    void leave();

protected:
    void paintEvent(QPaintEvent * e);
};

#endif // ROUNDBUTTON_H
