/*
 * ==============================================================
 *
 *       FileName: adaptee.h
 *    Description: 适配者
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-30 17:15:18
 *  Last Modified: 2018-07-30 17:17:37
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef ADAPTEE_H
#define ADAPTEE_H

#include <iostream>

// 自带的充电器 - 两脚扁型
class OwnCharger
{
public:
    void chargeWithFeetFlat() { std::cout << "OwnCharger::ChargeWithFeetFlat" << std::endl; }
};

#endif // ADAPTEE_H
