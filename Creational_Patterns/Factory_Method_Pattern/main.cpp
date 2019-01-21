/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description: 测试工厂方法模式
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-28 16:29:11
 *  Last Modified: 2018-07-28 17:11:55
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "concrete_factory.h"
#include "product.h"
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
    IFactory *pFactory = new BenzFactory();
    ICar *pCar = pFactory->createCar();
    std::cout << pCar->name() << std::endl;
    SAFE_DELETE(pCar);
    SAFE_DELETE(pFactory);

    // 宝马
    pFactory = new BmwFactory();
    pCar = pFactory->createCar();
    std::cout << "Bmw factory: " << pCar->name() << std::endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pFactory);

    // 奥迪
    pFactory = new AudiFactory();
    pCar = pFactory->createCar();
    std::cout << "Audi factory: " << pCar->name() << std::endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pFactory);

    return 0;
}
