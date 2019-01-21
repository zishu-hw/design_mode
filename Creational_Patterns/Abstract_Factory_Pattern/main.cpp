/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description: 测试抽象工厂模式
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-30 10:23:35
 *  Last Modified: 2018-07-30 10:45:27
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */

#include "factory.h"
#include "product.h"
#include <iostream>

using namespace std;

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
    AFactory *pFactory = AFactory::createFactory(AFactory::FACTORY_TYPE::BENZ_FACTORY);
    ICar *pCar = pFactory->createCar();
    IBike *pBike = pFactory->createBike();
    std::cout << pCar->name() << std::endl;
    std::cout << pBike->name() << std::endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pBike);
    SAFE_DELETE(pFactory);
    // 宝马
    pFactory = AFactory::createFactory(AFactory::FACTORY_TYPE::BMW_FACTORY);
    pCar = pFactory->createCar();
    pBike = pFactory->createBike();
    cout << "Bmw factory - Car: " << pCar->name() << endl;
    cout << "Bmw factory - Bike: " << pBike->name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pBike);
    SAFE_DELETE(pFactory);

    // 奥迪
    pFactory = AFactory::createFactory(AFactory::FACTORY_TYPE::AUDI_FACTORY);
    pCar = pFactory->createCar();
    pBike = pFactory->createBike();
    cout << "Audi factory - Car: " << pCar->name() << endl;
    cout << "Audi factory - Bike: " << pBike->name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pBike);
    SAFE_DELETE(pFactory);

    return 0;
}
