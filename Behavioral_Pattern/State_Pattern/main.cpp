/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 16:39:48
 *  Last Modified: 2018-08-06 16:43:07
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */

#include "context.h"
#include <iostream>
#include <unistd.h>

int main()
{
    TrafficLights tl;

    enum TLState { Red, Green, Yellow };

    TLState state = Red; // 初始状态为红灯
    int i = 0;           // 总次数
    int seconds;         // 秒数

    while (true) {
        // 表示一个完整的状态流（红灯->绿灯->黄灯）已经完成
        if (i % 3 == 0)
            std::cout << "**********"
                      << "Session " << ((i + 1) / 3) + 1 << "**********" << std::endl;

        // 根据当前状态来设置持续时间，红灯（6秒）、绿灯（4秒）、黄灯（2秒）
        if (state == Red) {
            seconds = 6;
            state = Green;
        } else if (state == Green) {
            seconds = 4;
            state = Yellow;
        } else if (state == Yellow) {
            seconds = 2;
            state = Red;
        }

        // 休眠
        sleep(seconds);

        tl.request();
        i++;
    }

    return 0;
}
