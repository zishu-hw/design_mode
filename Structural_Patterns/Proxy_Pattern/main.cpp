/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-02 11:03:10
 *  Last Modified: 2018-08-02 11:03:37
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "proxy.h"

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
    Proxy *proxy = new Proxy();
    proxy->recharge(20);
    proxy->recharge(100);

    SAFE_DELETE(proxy);

    return 0;
}
