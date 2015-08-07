#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../../goodies/roundbutton/roundbutton.h"
#include "../../goodies/slider/slider.h"
#include "../../goodies/hoverframe/hoverframe.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    RoundButton *bt_RoundButton;

private:
    Ui::MainWindow *ui;
    HoverFrame* sliderContainer;
    Slider* slider;
    QTimer* t_scrollDemo;


private slots:
    void scrollLeft(bool checked);
    void scrollRight(bool checked);
    void s_scrollDemo();
    void s_scrollStart();
    void s_scrollStop();
};

#endif // MAINWINDOW_H
