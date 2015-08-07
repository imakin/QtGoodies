#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../../goodies/roundbutton/roundbutton.h"
#include "../../goodies/slider/slider.h"

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
    Slider* slider;

private slots:
    void scrollkanan(bool checked);
    void scrollkiri(bool checked);
};

#endif // MAINWINDOW_H
