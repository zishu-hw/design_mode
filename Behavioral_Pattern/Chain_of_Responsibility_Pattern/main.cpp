/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 21:33:33
 *  Last Modified: 2018-08-06 21:35:36
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "concrete_handler.h"

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
    IHandler *manager = new Manager();
    IHandler *director = new Director();
    IHandler *ceo = new CEO();

    // 职责链：经理 -> 总监 -> 总裁
    manager->setSuccessor(director);
    director->setSuccessor(ceo);

    manager->handleRequest(1);
    manager->handleRequest(2);
    manager->handleRequest(5);
    manager->handleRequest(10);

    SAFE_DELETE(manager);
    SAFE_DELETE(director);
    SAFE_DELETE(ceo);

    getchar();

    return 0;
}
