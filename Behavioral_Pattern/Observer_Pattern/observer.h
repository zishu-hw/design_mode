/*
 * ==============================================================
 *
 *       FileName: observer.h
 *    Description: 抽象的观察者
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 10:54:26
 *  Last Modified: 2018-08-06 10:55:33
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef OBSERVER_H
#define OBSERVER_H

class IObserver
{
public:
    virtual void update(float price) = 0; // 更新价格
    virtual ~IObserver() = default;
};

#endif // OBSERVER_H
