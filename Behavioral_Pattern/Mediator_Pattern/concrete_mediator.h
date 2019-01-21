/*
 * ==============================================================
 *
 *       FileName: concrete_mediator.h
 *    Description: 具体中介者
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 11:32:00
 *  Last Modified: 2018-08-06 11:37:25
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_MEDIATOR_H
#define CONCRETE_MEDIATOR_H

#include "mediator.h"

class ConcreteMediator : public IMediator
{
public:
    void distributeMessage(const IColleague *sender, const std::string &message) const override
    {
        for (const IColleague *c : getColleagues()) {
            // 不将消息发送给自己
            if (c != sender) {
                c->receiveMessage(sender, message);
            }
        }
    }

private:
    /* data */
};

#endif // CONCRETE_MEDIATOR_H
