/*
 * ==============================================================
 *
 *       FileName: concrete_implementor.h
 *    Description: 具体实现类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 15:15:04
 *  Last Modified: 2018-08-01 15:20:48
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_IMPLEMENTOR_H
#define CONCRETE_IMPLEMENTOR_H

#include "implementor.h"
#include <iostream>

// 点灯
class Light : public IElectricalEquipment
{
public:
    void powerOn() override { std::cout << "Light is on." << std::endl; }
    void powerOff() override { std::cout << "Light is off." << std::endl; }
};
// 电风扇
class Fan : public IElectricalEquipment
{
public:
    void powerOn() override { std::cout << "Fan is on." << std::endl; }
    void powerOff() override { std::cout << "Fan is off." << std::endl; }
};

#endif // CONCRETE_IMPLEMENTOR_H
