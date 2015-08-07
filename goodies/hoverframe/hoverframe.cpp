#include "hoverframe.h"

HoverFrame::HoverFrame(QWidget *parent) :
    QFrame(parent)
{
}

void HoverFrame::enterEvent(QEvent *e)
{
    emit onHover();
    QFrame::enterEvent(e);
}

void HoverFrame::leaveEvent(QEvent *e)
{
    emit onLeave();
    QFrame::leaveEvent(e);
}
