// openhomm - open source clone of Heroes of Might and Magic III
// Copyright (C) 2009 openhomm developers team (see AUTHORS)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#ifndef HRGRAPHICSITEM_H
#define HRGRAPHICSITEM_H

#include "precompiled.hpp"
//#include <QGLWidget>

class hrGraphicsItem
{
private:
    struct Block
    {
        QVector<QImage> frames;
    };
    QVector<Block> blocks;
    int curFrame;
    int curBlock;
    bool isNextFrame;
    QRect rect;
public:
    hrGraphicsItem();

    int getFramesCount() const;
    void nextFrame();
    const QImage& getNextFrame();
    const QImage& getFrame(int frame) const;
    const QImage& getFrame();
    const QRect& getRect() const;
    void modifyFrame(const QImage& im);

    void addImage(const QImage &im);

    void addBlock();
    void setCurBlock(int i);
    int getBlocksCount() const;
};

#endif // HRGRAPHICSITEM_H