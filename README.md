# QtGoodies
Collection of reusable Qt classes like animated buttons, slider, etc (in early progress) (read Info)

Trello todo-list board https://trello.com/b/CwHuHZ69/qtgoodies
Help, fork, & talks are highly appreciated, Discussion goes to issue, use "Feature" label on the issue. 
Feel free to write discussion, as long as it is under "Feature" label just treat it like a chat box.

# Demo
For full usage & snapshot, fireup your QtCreator and open the demo project files!
 
`demo/QtGoodiesDemo/QtGoodiesDemo.pro`

# Goodies
all placed separated in `goodies/` folder

Done projects:
  * *HoverButton*: common button derivates QPushButton that provides mouse interaction onHover() and onLeave() signal
  * *HoverFrame*: common frame derivates QFrame that provides mouse interaction onHover() and onLeave() signal

In-work Projects:
  * *Slider*:
  
  An html-like slider frame
  
  ![Preview](https://raw.githubusercontent.com/imakin/QtGoodies/master/doc/img/slider.gif "Slider")
  
  Usage: 
```C++
        /** SLIDER DEMO **/
        //-- create the container, can be QFrame or any derivative of that
        sliderContainer = new HoverFrame(this);
        sliderContainer->setGeometry(200,60,960,533);
        sliderContainer->show();
        
        //-- create the slider
        slider = new Slider(sliderContainer);
        
        //-- create its pages
        QFrame* f1 = new QFrame(slider);
        f1->setStyleSheet("background-image:url(:/i/m.jpg);");
        QFrame* f2 = new QFrame(slider);
        f2->setStyleSheet("background-image:url(:/i/rftl.jpg);");
        QFrame* f3 = new QFrame(slider);
        f3->setStyleSheet("background-image:url(:/i/plang2.jpg);");
        
        //-- add those pages
        slider->addPage(Slider::APPEND_RIGHT_MOST,f1);
        slider->addPage(Slider::APPEND_RIGHT_MOST,f2);
        slider->addPage(Slider::APPEND_RIGHT_MOST,f3);
        
        slider->show();
```
      
Sliding/scrolling is just a call away:
      
```C++
        slider->scroll(Slider::SCROLL_DIRECTION_RIGHT);
```
  
  * *RoundButton*:
  
      ![Preview](https://raw.githubusercontent.com/imakin/QtGoodies/master/doc/img/roundbutton.gif "RoundButton")
  
      * An animated round button mimic one on the Github GUI. This class derivates HoverButton. 
      * Usage: common usage, (like QPushButton)
      

# Demo test
![Preview](https://api.travis-ci.org/imakin/QtGoodies.svg?branch=master "build")
