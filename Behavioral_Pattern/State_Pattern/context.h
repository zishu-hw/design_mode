/*
 * ==============================================================
 *
 *       FileName: context.h
 *    Description: 上下文
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 16:28:11
 *  Last Modified: 2018-08-06 16:37:09
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONTEXT_H
#define CONTEXT_H

#include "concrete_state.h"

// 交通信号灯
class TrafficLights
{
public:
    TrafficLights() { m_pState = new RedLight(this); }
    void setState(IState *state) { m_pState = state; }
    void request() { m_pState->handle(); }

private:
    IState *m_pState;
};

#endif // CONTEXT_H
