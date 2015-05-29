#ifndef DBUS_H
#define DBUS_H
#include <qgraphicsitem.h>

//qtdbus
#include <QtDBus/qdbusabstractadaptor.h>
#include <QtDBus/qdbusabstractinterface.h>
#include <QtDBus/qdbusconnection.h>
#include <QDBusMessage>
#include <DButton.h>


class dbus :public DButton
{
public:
    dbus();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

};

#endif // DBUS_H
