#ifndef HOVERBUTTON_H
#define HOVERBUTTON_H

/*--
 * @author: Izzulmakin, 2015-08-07
 * reimplementation of QPushButton that provide
 * several important signals:
 *      hover, leave
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
    void onHover();
    void onLeave();

public slots:

};

#endif // HOVERBUTTON_H
