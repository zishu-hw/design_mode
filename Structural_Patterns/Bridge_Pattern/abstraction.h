/*
 * ==============================================================
 *
 *       FileName: abstraction.h
 *    Description: 抽象类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 15:21:04
 *  Last Modified: 2018-08-01 15:35:04
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "implementor.h"

// 开关
class ISwitch
{
public:
    ISwitch(IElectricalEquipment *ee) : m_pEe(ee){};
    virtual ~ISwitch() = default;
    // 打开
    virtual void on() = 0;
    virtual void off() = 0;

protected:
    IElectricalEquipment *m_pEe;
};

#endif // ABSTRACTION_H
