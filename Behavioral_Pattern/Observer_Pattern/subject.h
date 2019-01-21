/*
 * ==============================================================
 *
 *       FileName: subject.h
 *    Description: 抽象主题
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 10:44:05
 *  Last Modified: 2018-08-06 11:02:52
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef SUBJECT_H
#define SUBJECT_H

class IObserver;

class ISubject
{
public:
    virtual void attach(IObserver *) = 0; // 注册观察者
    virtual void detach(IObserver *) = 0; // 注销观察者
    virtual void notify() = 0;            // 通知观察者
    virtual ~ISubject() = default;
};

#endif // SUBJECT_H
