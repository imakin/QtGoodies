#include "hoverbutton.h"

HoverButton::HoverButton(QWidget *parent) :
    QPushButton(parent)
{
}

void HoverButton::enterEvent(QEvent *e)
{
    emit onhover();
    QPushButton::enterEvent(e);
}
void HoverButton::leaveEvent(QEvent *e)
{
    emit onleave();
    QPushButton::leaveEvent(e);
}
