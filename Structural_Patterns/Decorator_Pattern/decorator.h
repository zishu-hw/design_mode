/*
 * ==============================================================
 *
 *       FileName: decorator.h
 *    Description: 装饰类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 15:50:44
 *  Last Modified: 2018-08-01 19:17:43
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef DECORATOR_H
#define DECORATOR_H

#include "component.h"

// 调味品
class CondimentDecorator : public IBeverage
{
public:
    CondimentDecorator(IBeverage *beverage) : m_pBeverage(beverage) {}
    std::string name() override { return m_pBeverage->name(); }
    double cost() override { return m_pBeverage->cost(); }
protected:
    IBeverage *m_pBeverage;
};

#endif // DECORATOR_H
