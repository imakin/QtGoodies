#include "switchbutton.h"

switchbutton::switchbutton(QWidget *parent) :
    QAbstractButton(parent)
{
    this->setCheckable(true);

}
