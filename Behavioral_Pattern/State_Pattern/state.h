/*
 * ==============================================================
 *
 *       FileName: state.h
 *    Description: 抽象状态
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 16:30:59
 *  Last Modified: 2018-08-06 16:38:37
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef STATE_H
#define STATE_H

class IState
{
public:
    virtual void handle() = 0;
    virtual ~IState() = default;
};

#endif // STATE_H
