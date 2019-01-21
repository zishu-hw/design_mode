/*
 * ==============================================================
 *
 *       FileName: concrete_decorator.h
 *    Description: 具体装饰类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 15:54:18
 *  Last Modified: 2018-08-01 19:31:21
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_DECORATOR_H
#define CONCRETE_DECORATOR_H

#include "decorator.h"

// 奶油
class Cream : public CondimentDecorator
{
public:
    Cream(IBeverage *beverage) : CondimentDecorator(beverage) {}
    std::string name() override { return m_pBeverage->name() + "+ Cream"; }
    double cost() override { return m_pBeverage->cost() + 3.5; }
};

// 摩卡
class Mocha : public CondimentDecorator
{
public:
    Mocha(IBeverage *beverage) : CondimentDecorator(beverage) {}

    std::string name() override { return m_pBeverage->name() + "+ Mocha"; }

    double cost() override { return m_pBeverage->cost() + 2.0; }
};

// 糖浆
class Syrup : public CondimentDecorator
{
public:
    Syrup(IBeverage *beverage) : CondimentDecorator(beverage) {}

    std::string name() override { return m_pBeverage->name() + "+ Syrup"; }

    double cost() override { return m_pBeverage->cost() + 3.0; }
};

#endif // CONCRETE_DECORATOR_H
