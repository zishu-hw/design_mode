/*
 * ==============================================================
 *
 *       FileName: flyweight.h
 *    Description: 抽象享元类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-02 10:17:39
 *  Last Modified: 2018-08-02 10:34:31
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <iostream>
#include <string>

class IPlayer
{
public:
    virtual ~IPlayer(){};
    // 分配武器
    virtual void assignWeapon(std::string weapon) = 0;
    // 使命
    virtual void mission() = 0;

protected:
    std::string m_task;   // 内部状态
    std::string m_weapon; // 外部状态
};

#endif // FLYWEIGHT_H
