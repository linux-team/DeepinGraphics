#ifndef DACCOUNTVIEW_H
#define DACCOUNTVIEW_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QObject>


class DAccountview : public QObject
{
    Q_OBJECT
public:
    DAccountview();
    
    QGraphicsScene accountScene;
    QGraphicsScene scene;
    QGraphicsView view;
public slots:
    
    void performAction();
    
};



#endif // DACCOUNTVIEW_H
