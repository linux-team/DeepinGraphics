#ifndef DACCOUNTVIEW_H
#define DACCOUNTVIEW_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QObject>




class DHomeview : public QObject
{
    Q_OBJECT
public:
    DHomeview();

    QGraphicsScene accountScene;
    QGraphicsScene displayScene;
    QGraphicsScene defaultScene;
    QGraphicsScene personalizationScene;
    QGraphicsScene networkScene;
    QGraphicsScene soundScene;
    QGraphicsScene dateScene;
    QGraphicsScene powerScene;
    QGraphicsScene mouseScene;
    QGraphicsScene keyboardScene;
    QGraphicsScene shortcutsScene;
    QGraphicsScene menuScene;
    QGraphicsScene systemScene;
  //  QGraphicsScene homeScene;

    QGraphicsScene scene;
    QGraphicsView view;
public slots:
    
    void account();
    void display();
    void default1();
    void personalization();
    void network();
    void sound();
    void date();
    void power();
    void mouse();
    void keyboard();
    void shortcuts();
    void menu();
    void system();
    void home();
    void pow();
    void displayreset();
    
};



#endif // DACCOUNTVIEW_H
