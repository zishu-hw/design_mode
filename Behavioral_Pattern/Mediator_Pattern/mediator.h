/*
 * ==============================================================
 *
 *       FileName: mediator.h
 *    Description: 抽象中介者
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 11:18:09
 *  Last Modified: 2018-08-06 11:34:57
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "colleague.h"
#include <list>
#include <string>

class IColleague;

class IMediator
{
public:
    virtual ~IMediator() = default;
    // 注册参与者
    virtual void registerColleague(IColleague *colleague) { m_colleagues.push_back(colleague); }
    const std::list<IColleague *> &getColleagues() const { return m_colleagues; }
    // 将发送者的消息发送给参与者
    virtual void distributeMessage(const IColleague *sender, const std::string &message) const = 0;

private:
    std::list<IColleague *> m_colleagues;
};

#endif // MEDIATOR_H
