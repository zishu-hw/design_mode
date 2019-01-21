/*
 * ==============================================================
 *
 *       FileName: refined_abstraction.h
 *    Description: 扩充抽象类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 15:25:08
 *  Last Modified: 2018-08-01 15:31:28
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef REFINED_ABSTRACTION_H
#define REFINED_ABSTRACTION_H

#include "abstraction.h"
#include <iostream>

// 拉链式开关
class PullChainSwitch : public ISwitch
{
public:
    PullChainSwitch(IElectricalEquipment *ee) : ISwitch(ee){};
    // 用拉链式开关打开电器
    void on() override
    {
        std::cout << "Switch on the equipment with a pull chain switch." << std::endl;
        m_pEe->powerOn();
    }
    // 用拉链式开关关闭电器
    void off() override
    {
        std::cout << "Switch off the equipment with a pull chain switch." << std::endl;
        m_pEe->powerOff();
    }
};

// 两位开关
class TwoPositionSwitch : public ISwitch
{
public:
    TwoPositionSwitch(IElectricalEquipment *ee) : ISwitch(ee) {}

    // 用两位开关打开电器
    virtual void on() override
    {
        std::cout << "Switch on the equipment with a two-position switch." << std::endl;
        m_pEe->powerOn();
    }

    // 用两位开关关闭电器
    virtual void off() override
    {
        std::cout << "Switch off the equipment with a two-position switch." << std::endl;
        m_pEe->powerOff();
    }
};
#endif // REFINED_ABSTRACTION_H
