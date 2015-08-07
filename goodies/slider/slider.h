#ifndef SLIDER_H
#define SLIDER_H
#include <QtCore>
#include <QtGui>
#include <QFrame>

/*
 * author Izzulmakin, August 2015
 * Slider frame, put it inside a container frame
 *
 *  note: dont get confused
 *      slideUp    = scrollDown
 *      slideDown  = scrollUp
 *      slideLeft  = scrollRight
 *      slideRight = scrollLeft //*/
class Slider : public QFrame
{
    Q_OBJECT
public:
    explicit Slider(QWidget* parent);
    virtual ~Slider(){}
    void addPage(int8_t append_direction, QFrame* page);
    void autoSize();
    void slide(uint8_t slide_direction);

public:
    static const int8_t APPEND_RIGHT_MOST = 1;
    static const int8_t APPEND_BOTTOM_MOST = 2;
    static const uint8_t SLIDE_DIRECTION_LEFT = 1;
    static const uint8_t SLIDE_DIRECTION_RIGHT = 2;
    static const uint8_t SLIDE_DIRECTION_DOWN = 3;
    static const uint8_t SLIDE_DIRECTION_UP = 4;


private:
    QTimer* at_slideRight;
    QTimer* at_slideLeft;
    QTimer* at_slideUp;
    QTimer* at_slideDown;
    int av_slideDelay;
    int av_slideSpeed;
    int av_slideCounter;
    int av_slideVStep; //-- the position of the slide (vertical). -1 means slided up once, -2 twice and so on
    int av_slideHStep; //-- the position of the slide (horizontal). -1 means slided up once, -2 twice and so on
    static const int SLIDE_LEFT = -1;
    static const int SLIDE_RIGHT = 1;
    static const int SLIDE_UP = -1;
    static const int SLIDE_DOWN = 1;

    QWidget* myParent;

    int displayW;
    int displayH;

public slots:
    void as_slideLeft();
    void as_slideRight();
    void as_slideUp();
    void as_slideDown();

};

#endif // SLIDER_H
