#ifndef HOVERBUTTON_H
#define HOVERBUTTON_H

/*--
 * reimplementation of QPushButton that provide
 * several important signals:
 *      focus in/hover, focus out/leave
 */

#include <QPushButton>

class HoverButton : public QPushButton
{
    Q_OBJECT
public:
    explicit HoverButton(QWidget *parent = 0);

protected:
    void enterEvent(QEvent * e);
    void leaveEvent(QEvent * e);

signals:
    void onhover();
    void onleave();

public slots:

};

#endif // HOVERBUTTON_H
