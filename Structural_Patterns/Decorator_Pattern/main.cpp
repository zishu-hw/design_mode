/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 15:58:30
 *  Last Modified: 2018-08-01 19:31:23
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "concrete_component.h"
#include "concrete_decorator.h"
#include <iostream>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p)                                                                                                                               \
    {                                                                                                                                                \
        if (p) {                                                                                                                                     \
            delete (p);                                                                                                                              \
            (p) = NULL;                                                                                                                              \
        }                                                                                                                                            \
    }
#endif

int main(void)
{
    IBeverage *pHouseBlend = new HouseBlend();
    std::cout << pHouseBlend->name() << ":" << pHouseBlend->cost() << std::endl;
    CondimentDecorator *pCream = new Cream(pHouseBlend);
    std::cout << pCream->name() << ":" << pCream->cost() << std::endl;
    CondimentDecorator *pMocha = new Mocha(pHouseBlend);
    std::cout << pMocha->name() << ":" << pMocha->cost() << std::endl;

    IBeverage *pDarkRoast = new DarkRoast();
    std::cout << pDarkRoast->name() << ":" << pDarkRoast->cost() << std::endl;

    CondimentDecorator *pCreamDR = new Cream(pDarkRoast);
    std::cout << pCreamDR->name() << ":" << pCreamDR->cost() << std::endl;

    CondimentDecorator *pCreamMocha = new Mocha(pCreamDR);
    std::cout << pCreamMocha->name() << ":" << pCreamMocha->cost() << std::endl;

    // 深度烘培咖啡豆 + 奶油 + 摩卡 + 糖浆
    CondimentDecorator *pCreamMochaSyrup = new Syrup(pCreamMocha);
    std::cout << pCreamMochaSyrup->name() << " : " << pCreamMochaSyrup->cost() << std::endl;

    SAFE_DELETE(pMocha);
    SAFE_DELETE(pCream);
    SAFE_DELETE(pHouseBlend);

    SAFE_DELETE(pCreamMochaSyrup);
    SAFE_DELETE(pCreamMocha);
    SAFE_DELETE(pCreamDR);
    SAFE_DELETE(pDarkRoast);
    return 0;
}
