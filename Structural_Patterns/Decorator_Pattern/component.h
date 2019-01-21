/*
 * ==============================================================
 *
 *       FileName: component.h
 *    Description: 构建类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 15:46:46
 *  Last Modified: 2018-08-01 19:21:06
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

// 所有饮料基类
class IBeverage
{
public:
    virtual std::string name() = 0;
    virtual double cost() = 0;
    virtual ~IBeverage() {}
};

#endif // COMPONENT_H
