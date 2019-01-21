/*
 * ==============================================================
 *
 *       FileName: colleague.h
 *    Description: 抽象同时
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 11:37:49
 *  Last Modified: 2018-08-06 11:44:39
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include "mediator.h"

class IMediator;

// 抽象同事类
class IColleague
{
public:
    IColleague(const std::string &name) : m_strName(name) {}
    std::string getName() const { return m_strName; }
    virtual ~IColleague() = default;
    // 通过中介,将自己的消息发布出去
    virtual void sendMessage(const IMediator &mediator, const std::string &message) const = 0;
    // 接受来自发送者的消息
    virtual void receiveMessage(const IColleague *sender, const std::string &message) const = 0;

private:
    std::string m_strName;
};

#endif // COLLEAGUE_H
