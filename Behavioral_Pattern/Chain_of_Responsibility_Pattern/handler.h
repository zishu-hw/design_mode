/*
 * ==============================================================
 *
 *       FileName: handler.h
 *    Description: 抽象处理者
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 21:25:45
 *  Last Modified: 2018-08-06 21:29:44
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef HANDLER_H
#define HANDLER_H

class IHandler
{
public:
    IHandler() { m_pSuccessor = nullptr; }
    virtual ~IHandler() = default;
    void setSuccessor(IHandler *successor) { m_pSuccessor = successor; }
    virtual void handleRequest(float days) = 0;

protected:
    IHandler *m_pSuccessor; // 后继者
};

#endif // HANDLER_H
