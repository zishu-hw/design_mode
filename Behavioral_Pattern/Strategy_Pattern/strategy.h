/*
 * ==============================================================
 *
 *       FileName: strategy.h
 *    Description: 抽象策略
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 16:52:50
 *  Last Modified: 2018-08-06 16:54:00
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef STRATEGY_H
#define STRATEGY_H

// 出行策略
class IStrategy
{
public:
    virtual void travel() = 0;
    virtual ~IStrategy() = default;

private:
    /* data */
};

#endif // STRATEGY_H
