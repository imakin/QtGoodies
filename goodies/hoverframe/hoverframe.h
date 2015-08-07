#ifndef HOVERFRAME_H
#define HOVERFRAME_H

#include <QFrame>

class HoverFrame : public QFrame
{
    Q_OBJECT
public:
    explicit HoverFrame(QWidget *parent = 0);

protected:
    void enterEvent(QEvent * e);
    void leaveEvent(QEvent * e);

signals:
    void onHover();
    void onLeave();

public slots:

};

#endif // HOVERFRAME_H
