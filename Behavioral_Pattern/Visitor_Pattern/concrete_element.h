/*
 * ==============================================================
 *
 *       FileName: concrete_element.h
 *    Description: 具体元素
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 21:43:23
 *  Last Modified: 2018-08-06 21:44:12
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_ELEMENT_H
#define CONCRETE_ELEMENT_H

#include "element.h"
#include "visitor.h"
#include <iostream>

// 钟楼
class BellTower : public IPlace
{
public:
    virtual void accept(IVisitor *visitor) override
    {
        std::cout << "Bell Tower is accepting visitor." << std::endl;
        visitor->visit(this);
    }
};

// 兵马俑
class TerracottaWarriors : public IPlace
{
public:
    virtual void accept(IVisitor *visitor) override
    {
        std::cout << "Terracotta Warriors is accepting visitor." << std::endl;
        visitor->visit(this);
    }
};

#endif // CONCRETE_ELEMENT_H
