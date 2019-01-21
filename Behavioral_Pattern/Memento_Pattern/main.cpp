/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 15:54:35
 *  Last Modified: 2018-08-06 15:56:07
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "care_taker.h"
#include "originator.h"

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
    Life *life = new Life();
    PandorBox *box = new PandorBox(life);

    // 设置并保存一个历史时间
    life->setDateTime("2000/10/01 00:00:00");
    box->save();

    // 设置并保存一个历史时间
    life->setDateTime("2010/10/01 00:00:00");
    box->save();

    // 设置一个历史时间
    life->setDateTime("2018/10/01 00:00:00");

    // 穿越
    box->undo();
    std::cout << "Actual date time is " << life->getDateTime() << std::endl;

    // 再次穿越
    box->undo();
    std::cout << "Actual date time is " << life->getDateTime() << std::endl;

    SAFE_DELETE(life);
    SAFE_DELETE(box);

    getchar();

    return 0;
}
