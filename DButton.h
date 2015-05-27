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
#ifndef ACCOUNTVIEW_H
#define ACCOUNTVIEW_H

#include "DComponent.h"
#include <QGraphicsItem>
#include <QMouseEvent>
#include <QDebug>
#include <QGraphicsView>

class DButton : public DComponent , public QGraphicsView
{
public:
    DButton();

protected:
    void mousePressEvent(QMouseEvent *event);
private:

};

#endif // ACCOUNTVIEW_H
