/****************************************************************************
**
**  Copyright (C) 2011~2015 Deepin, Inc.
**                2011~2015 Zhe Wang
**
**  Author:     Zhe Wang <wzedmund@gmail.com>
**  Maintainer: 
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
**
****************************************************************************/
#ifndef DSWITCHBUTTON_H
#define DSWITCHBUTTON_H

#include "DButton.h"

class DSwitchbutton : public DButton
{
public:
    DSwitchbutton();

    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

private:
    void paintSwitchOff(QPainter *painter);

    void paintSwitchOn(QPainter *painter);
    bool switched;
};

#endif // DSWITCHBUTTON_H
