/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 11:45:20
 *  Last Modified: 2018-08-06 11:46:06
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "concrete_colleague.h"
#include "concrete_mediator.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p)                                                                                                                               \
    {                                                                                                                                                \
        if (p) {                                                                                                                                     \
            delete (p);                                                                                                                              \
            (p) = NULL;                                                                                                                              \
        }                                                                                                                                            \
    }
#endif

int main()
{
    // 房东
    IColleague *landlord = new ConcreteColleague("Tom");

    // 租客
    IColleague *jerry = new ConcreteColleague("Jerry");
    IColleague *tuffy = new ConcreteColleague("Tuffy");

    // 中介者 - 添加租客
    ConcreteMediator mediator;
    mediator.registerColleague(jerry);
    mediator.registerColleague(tuffy);

    // 房东通过中介将消息发送出去
    landlord->sendMessage(mediator, "Xi'erqi, two bedroom house, 6000/month.");

    SAFE_DELETE(jerry);
    SAFE_DELETE(tuffy);

    return 0;
}
