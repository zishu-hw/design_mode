/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 15:32:04
 *  Last Modified: 2018-08-01 15:35:30
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */

#include "concrete_implementor.h"
#include "refined_abstraction.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p)                                                                                                                               \
    {                                                                                                                                                \
        if (p) {                                                                                                                                     \
            delete (p);                                                                                                                              \
            (p) = NULL;                                                                                                                              \
        }                                                                                                                                            \
    }
#endif

int main(void)
{
    IElectricalEquipment *light = new Light();
    IElectricalEquipment *fan = new Fan();

    /**
     * 创建开关 - 拉链式开关、两位开关
     * 将拉链式开关和电灯关联起来，将两位开关和风扇关联起来
    **/
    ISwitch *pullChain = new PullChainSwitch(light);
    ISwitch *twoPosition = new TwoPositionSwitch(fan);

    // 开灯、关灯
    pullChain->on();
    pullChain->off();

    // 打开风扇、关闭风扇
    twoPosition->on();
    twoPosition->off();

    SAFE_DELETE(twoPosition);
    SAFE_DELETE(pullChain);
    SAFE_DELETE(fan);
    SAFE_DELETE(light);

    return 0;
}
