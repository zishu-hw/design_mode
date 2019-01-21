/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-05 11:26:49
 *  Last Modified: 2018-08-05 11:27:57
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */

#include "concrete_class.h"

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
    // 阿里校招
    Company *alibaba = new Alibaba();
    alibaba->recruit();

    // 腾讯校招
    Company *tencent = new Tencent();
    tencent->recruit();

    SAFE_DELETE(tencent);
    SAFE_DELETE(alibaba);

    return 0;
}
