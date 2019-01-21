/*
 * ==============================================================
 *
 *       FileName: factory.h
 *    Description: 工厂抽象类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-29 10:50:40
 *  Last Modified: 2018-07-30 10:43:44
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

class AFactory
{
public:
    enum FACTORY_TYPE { BENZ_FACTORY, BMW_FACTORY, AUDI_FACTORY };
    virtual ICar *createCar() = 0;
    virtual IBike *createBike() = 0;
    static AFactory *createFactory(FACTORY_TYPE factory);
    virtual ~AFactory(){};
};

#endif // FACTORY_H
