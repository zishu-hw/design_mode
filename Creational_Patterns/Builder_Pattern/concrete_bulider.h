/*
 * ==============================================================
 *
 *       FileName: concrete_bulider.h
 *    Description: 具体的建造类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-30 15:35:56
 *  Last Modified: 2018-07-30 15:44:58
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_BULIDER_H
#define CONCRETE_BULIDER_H

#include "builder.h"
class ThinkPadBuilder : public Builder
{
public:
    ThinkPadBuilder() { m_pComputer = new Computer(); }
    void buildCpu() { m_pComputer->setCpu("i5-6200U"); }
    void buildMainboard() { m_pComputer->setMainboard("Intel DH57DD"); }
    void buildRam() { m_pComputer->setRam("DDR4"); }
    void buildVideoCard() { m_pComputer->setVideoCard("NVIDIA Geforce 920MX"); }
    Computer *getResult() { return m_pComputer; }

private:
    Computer *m_pComputer;
};
class YogaBuilder : public Builder
{
public:
    YogaBuilder() { m_pComputer = new Computer(); }
    void buildCpu() { m_pComputer->setCpu("i7-7500U"); }
    void buildMainboard() { m_pComputer->setMainboard("Intel DP55KG"); }
    void buildRam() { m_pComputer->setRam("DDR5"); }
    void buildVideoCard() { m_pComputer->setVideoCard("NVIDIA Geforce 940MX"); }
    Computer *getResult() { return m_pComputer; }

private:
    Computer *m_pComputer;
};

#endif // CONCRETE_BULIDER_H
