/*
 * ==============================================================
 *
 *       FileName: concrete_state.cpp
 *    Description: 具体状态
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 16:36:05
 *  Last Modified: 2018-08-06 16:39:37
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "concrete_state.h"
#include "context.h"

void RedLight::handle()
{
    std::cout << "Red Light" << std::endl;
    m_pContext->setState(new GreenLight(m_pContext));
    delete this;
}

void GreenLight::handle()
{
    std::cout << "Green Light" << std::endl;
    m_pContext->setState(new YellowLight(m_pContext));
    delete this;
}

void YellowLight::handle()
{
    std::cout << "Yellow Light" << std::endl;
    m_pContext->setState(new RedLight(m_pContext));
    delete this;
}
