/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description: 
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-30 17:21:51
 *  Last Modified: 2018-07-30 17:26:01
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "adapter.h"

int main()
{
    // 创建适配器
    IRussiaSocket *pAdapter = new PowerAdapter();

    // 充电
    pAdapter->charge();

    SAFE_DELETE(pAdapter);

    return 0;
}
