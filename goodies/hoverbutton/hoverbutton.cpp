#include "hoverbutton.h"

HoverButton::HoverButton(QWidget *parent) :
    QPushButton(parent)
{
}

void HoverButton::enterEvent(QEvent *e)
{
    emit onHover();
    QPushButton::enterEvent(e);
}
void HoverButton::leaveEvent(QEvent *e)
{
    emit onLeave();
    QPushButton::leaveEvent(e);
}
