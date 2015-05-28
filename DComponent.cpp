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
#include "DComponent.h"
#include <QPainter>
#include <QCursor>
#include <QKeyEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneContextMenuEvent>
#include <QMenu>

DComponent::DComponent()
{
    hovered = false;
    pressed = false;
    backgroundEnabled = false;
    adjust = 0;
    setFlag(QGraphicsItem::ItemIsFocusable);
    setAcceptHoverEvents(false);
    setReleaseBackgroundColor(defualtRelease);
    setPressBackgroundColor(defualtPress);
    setHoverBackgroundColor(defualtHover);
}

QRectF DComponent::boundingRect() const
{
    return QRectF(x_axis - adjust,
                  y_axis - adjust,
                  width + adjust,
                  height + adjust);
}

void DComponent::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                   QWidget *widget)
{
    if(pressed)
    {
        if(backgroundEnabled)
        {
            painter->setPen(pressBackgroundColor);
            painter->setBrush(pressBackgroundColor);
            painter->drawRect(x_axis, y_axis, width, height);
        }
        painter->drawPixmap(-releaseImage.width()/2,-releaseImage.height()/2,
                            releaseImage.width(),releaseImage.height(),pressImage);
    }
    else if(hovered)
    {
        if(backgroundEnabled)
        {
            painter->setPen(hoverBackgroundColor);
            painter->setBrush(hoverBackgroundColor);
            painter->drawRect(x_axis, y_axis, width, height);
        }
        painter->drawPixmap(-releaseImage.width()/2,-releaseImage.height()/2,
                            releaseImage.width(),releaseImage.height(),hoverImage);
    }
    else
    {
        if(backgroundEnabled)
        {
            painter->setPen(releaseBackgroundColor);
            painter->setBrush(releaseBackgroundColor);
            painter->drawRect(x_axis, y_axis, width, height);
        }
        painter->drawPixmap(-releaseImage.width()/2,-releaseImage.height()/2,
                            releaseImage.width(),releaseImage.height(),releaseImage);
    }
}

void DComponent::boundImageToPress(QString imagePath)
{
    pressImage.load(imagePath);
}

void DComponent::boundImageToRelease(QString imagePath)
{
    releaseImage.load(imagePath);
    setBounds(-releaseImage.width()/2,-releaseImage.height()/2,
              releaseImage.width(),releaseImage.height());
}

void DComponent::boundImageToHover(QString imagePath)
{
    hoverImage.load(imagePath);
}

void DComponent::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    pressed = true;
    emit fireAction();
    update();
}


void DComponent::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    pressed = false;
    update();
}


void DComponent::keyPressEvent(QKeyEvent *event)
{

}


void DComponent::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    hovered = true;
    update();
}

void DComponent::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    hovered = false;
    update();
}


void DComponent::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{

}
