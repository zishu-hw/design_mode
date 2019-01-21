/*
 * ==============================================================
 *
 *       FileName: concrete_strategy.h
 *    Description: 具体策略
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 16:54:15
 *  Last Modified: 2018-08-06 16:56:23
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_STRATEGY_H
#define CONCRETE_STRATEGY_H

#include "strategy.h"
#include <iostream>

// 骑自行车
class BikeStrategy : public IStrategy
{
public:
    void travel() override { std::cout << "Travel by bike." << std::endl; }
};

// 开车
class CarStrategy : public IStrategy
{
public:
    void travel() override { std::cout << "Travel by car" << std::endl; }
};

// 坐火车
class TrainStrategy : public IStrategy
{
public:
    void travel() override { std::cout << "Travel by train" << std::endl; }
};

#endif // CONCRETE_STRATEGY_H
