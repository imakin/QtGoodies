#ifndef SWITCHBUTTON_H
#define SWITCHBUTTON_H

#include <QAbstractButton>
#include <QtGui>
#include <QtCore>
class switchbutton : public QAbstractButton
{
    Q_OBJECT
    QString textOn;
    QString textOff;
public:
    explicit switchbutton(QWidget *parent = 0);

signals:

public slots:

};

#endif // SWITCHBUTTON_H
