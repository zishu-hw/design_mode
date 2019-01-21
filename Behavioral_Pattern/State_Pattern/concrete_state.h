/*
 * ==============================================================
 *
 *       FileName: concrete_state.h
 *    Description: 具体状态
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 16:31:43
 *  Last Modified: 2018-08-06 16:38:23
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_STATE_H
#define CONCRETE_STATE_H

#include "state.h"
#include <iostream>

class TrafficLights;

// 红灯
class RedLight : public IState
{
public:
    RedLight(TrafficLights *context) : m_pContext(context) {}
    void handle() override;

private:
    TrafficLights *m_pContext;
};

// 绿灯
class GreenLight : public IState
{
public:
    GreenLight(TrafficLights *context) : m_pContext(context) {}
    virtual void handle() override;

private:
    TrafficLights *m_pContext;
};

// 黄灯
class YellowLight : public IState
{
public:
    YellowLight(TrafficLights *context) : m_pContext(context) {}
    virtual void handle() override;

private:
    TrafficLights *m_pContext;
};

#endif // CONCRETE_STATE_H
