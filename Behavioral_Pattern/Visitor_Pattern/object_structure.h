/*
 * ==============================================================
 *
 *       FileName: object_structure.h
 *    Description: 对象结构
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 21:44:23
 *  Last Modified: 2018-08-06 21:44:56
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef OBJECT_STRUCTURE_H
#define OBJECT_STRUCTURE_H

#include "element.h"
#include <list>

// 城市（西安）
class City
{
public:
    void attach(IPlace *place) { m_places.push_back(place); }

    void detach(IPlace *place) { m_places.remove(place); }

    void accept(IVisitor *visitor)
    {
        // 为每一个 element 设置 visitor，进行对应的操作
        for (std::list<IPlace *>::iterator it = m_places.begin(); it != m_places.end(); ++it) {
            (*it)->accept(visitor);
        }
    }

private:
    std::list<IPlace *> m_places;
};

#endif // OBJECT_STRUCTURE_H
