/*
 * ==============================================================
 *
 *       FileName: concrete_component.h
 *    Description: 具体构建类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 15:48:14
 *  Last Modified: 2018-08-01 15:50:34
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_COMPONENT_H
#define CONCRETE_COMPONENT_H

#include "component.h"

// 黑咖啡
class HouseBlend : public IBeverage
{
public:
    std::string name() override { return "HouseBlend"; }
    double cost() override { return 30.0; }
};
// 深度烘培咖啡豆
class DarkRoast : public IBeverage
{
public:
    std::string name() override { return "DarkRoast"; }

    double cost() override { return 28.5; }
};

#endif // CONCRETE_COMPONENT_H
