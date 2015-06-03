#ifndef DWIDGET_H
#define DWIDGET_H

#include <QGraphicsItem>
#include <QObject>
#include <QtCore>

class DComponent :  public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    DComponent();

    QRectF boundingRect() const;

    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);

    void boundImageToPress(QString imagePath);

    void boundImageToRelease(QString imagePath);

    void boundImageToHover(QString imagePath);

    void setBounds(int x, int y, int w, int h)
    {
        x_axis = x;
        y_axis = y;
        width = w;
        height = h;
    }

    void setPressBackgroundColor(const QColor &color)
    {
        pressBackgroundColor = color;
    }

    void setReleaseBackgroundColor(const QColor &color)
    {
        releaseBackgroundColor = color;
    }

    void setHoverBackgroundColor(const QColor &color)
    {
        hoverBackgroundColor = color;
    }

    void setHoverEnableFlag(bool flag)
    {
         setAcceptHoverEvents(flag);
    }

    void setAdjust(qreal value)
    {
        adjust = value;
    }

    bool isPressed()
    {
        return pressed;
    }

    bool isHovered()
    {
        return hovered;
    }
    
    bool setBackgroundEnable(bool flag)
    {
        backgroundEnabled = flag;
    }
    
signals:
    
    void fireAction();
    
protected:
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);

private:
    const QColor defualtPress = Qt::black;
    const QColor defualtRelease = QColor(33, 33, 33, 255);
    const QColor defualtHover = Qt::black;

    bool pressed;
    bool hovered;
    bool backgroundEnabled;

    QColor hoverBackgroundColor;
    QColor releaseBackgroundColor;
    QColor pressBackgroundColor;

    int x_axis, y_axis, width, height;
    int text_x, text_y;
    qreal adjust;
    QPixmap pressImage;
    QPixmap releaseImage;
    QPixmap hoverImage;

};

#endif // DWIDGET_H
