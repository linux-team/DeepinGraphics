#include "dbus.h"

DBus::DBus()
{


}
void DBus::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
QDBusMessage m = QDBusMessage::createMethodCall("com.deepin.SessionManager",
                                                "/com/deepin/SessionManager",
                                                "com.deepin.SessionManager",
                                                "PowerOffChoose");

QDBusMessage response = QDBusConnection::sessionBus().call(m);
}

