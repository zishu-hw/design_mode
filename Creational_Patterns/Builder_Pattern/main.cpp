/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-30 15:41:46
 *  Last Modified: 2018-07-30 15:55:20
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "concrete_bulider.h"
#include "director.h"
#include <iostream>
#include <string>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p)                                                                                                                               \
    {                                                                                                                                                \
        if (p) {                                                                                                                                     \
            delete (p);                                                                                                                              \
            (p) = NULL;                                                                                                                              \
        }                                                                                                                                            \
    }
#endif

using namespace std;

int main(void)
{
    Director *pDirector = new Director();
    ThinkPadBuilder *pTPBuilder = new ThinkPadBuilder();
    YogaBuilder *pYgBuilder = new YogaBuilder();
    //组装ThinkPad,Yoga
    pDirector->create(pTPBuilder);
    pDirector->create(pYgBuilder);
    //获取组装后的电脑
    Computer *pTPComputer = pTPBuilder->getResult();
    Computer *pYgComputer = pYgBuilder->getResult();
    //测试输出
    cout << "-----ThinkPad-----" << endl;
    cout << "CPU: " << pTPComputer->getCpu() << endl;
    cout << "Mainboard: " << pTPComputer->getMainboard() << endl;
    cout << "Ram: " << pTPComputer->getRam() << endl;
    cout << "VideoCard: " << pTPComputer->getVideoCard() << endl;

    cout << "-----Yoga-----" << endl;
    cout << "CPU: " << pYgComputer->getCpu() << endl;
    cout << "Mainboard: " << pYgComputer->getMainboard() << endl;
    cout << "Ram: " << pYgComputer->getRam() << endl;
    cout << "VideoCard: " << pYgComputer->getVideoCard() << endl;

    SAFE_DELETE(pTPComputer);
    SAFE_DELETE(pYgComputer);
    SAFE_DELETE(pTPBuilder);
    SAFE_DELETE(pYgBuilder);
    SAFE_DELETE(pDirector);
    return 0;
}
