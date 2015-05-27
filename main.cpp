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

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QMouseEvent>
#include "DButton.h"


int main(int argc,char* argv[ ])
{
    QApplication app(argc,argv);

    QGraphicsScene scene;
    scene.setSceneRect(-40,-40,40,40);


    DButton * personalization = new DButton;
   // personalization->setPos();
    personalization->setPos(0,0);
    personalization->setHoverEnableFlag(true);
    personalization->setBackgroundEnable(true);
    personalization->boundImageToPress("resources/icons/personalization_press.png");
    personalization->boundImageToRelease("resources/icons/personalization_normal.png");
    personalization->boundImageToHover("resources/icons/personalization_hover.png");
    personalization->setBounds(-40,-40,80,80);
    scene.addItem(personalization);
    personalization->setAcceptTouchEvents(true);
    personalization->setAcceptHoverEvents(true);
    QGraphicsView view(&scene);

    view.setForegroundBrush(QColor(255, 255, 255, 100));
    view.resize(200,200);
    view.setBackgroundBrush(QColor(Qt::darkGray));
    view.show();

    return app.exec();
}

