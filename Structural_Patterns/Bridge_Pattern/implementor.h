/*
 * ==============================================================
 *
 *       FileName: implementor.h
 *    Description: 实现类接口
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 15:10:47
 *  Last Modified: 2018-08-01 15:14:43
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef IMPLEMENTOR_H
#define IMPLEMENTOR_H

// 电器
class IElectricalEquipment
{
public:
    virtual ~IElectricalEquipment() {}
    // 打开
    virtual void powerOn() = 0;
    // 关闭
    virtual void powerOff() = 0;
};

#endif // IMPLEMENTOR_H
