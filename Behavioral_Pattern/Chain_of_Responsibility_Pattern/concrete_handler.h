/*
 * ==============================================================
 *
 *       FileName: concrete_handler.h
 *    Description: 具体处理者
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 21:30:09
 *  Last Modified: 2018-08-06 21:33:05
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_HANDLER_H
#define CONCRETE_HANDLER_H

#include "handler.h"
#include <iostream>

class Manager : public IHandler
{
public:
    Manager() {}
    ~Manager() {}
    void handleRequest(float days) override
    {
        if (days <= 1) {
            std::cout << "Manager 批准了 " << days << " 天假" << std::endl;
        } else {
            m_pSuccessor->handleRequest(days);
        }
    }
};

// 总监
class Director : public IHandler
{
public:
    Director() {}
    ~Director() {}
    void handleRequest(float days) override
    {
        if (days <= 3) {
            std::cout << "Director 批准了 " << days << " 天假" << std::endl;
        } else {
            m_pSuccessor->handleRequest(days);
        }
    }
};

// 总裁
class CEO : public IHandler
{
public:
    CEO() {}
    ~CEO() {}
    virtual void handleRequest(float days) override
    {
        if (days <= 7) {
            std::cout << "CEO 批准了 " << days << " 天假" << std::endl;
        } else {
            std::cout << "给你放长假，以后不用来上班啦！" << std::endl;
        }
    }
};

#endif // CONCRETE_HANDLER_H
