#include "dbus.h"

dbus::dbus()
{


}
void dbus::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
QDBusMessage m = QDBusMessage::createMethodCall("com.deepin.SessionManager",
                                                "/com/deepin/SessionManager",
                                                "com.deepin.SessionManager",
                                                "PowerOffChoose");

QDBusMessage response = QDBusConnection::sessionBus().call(m);
}
