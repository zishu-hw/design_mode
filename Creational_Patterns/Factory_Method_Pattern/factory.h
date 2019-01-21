/*
 * ==============================================================
 *
 *       FileName: factory.h
 *    Description: 抽象工厂类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-28 16:22:47
 *  Last Modified: 2018-07-28 17:06:51
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef FACTORY_H
#define FACTORY_H
#include "product.h"

class IFactory
{
public:
    virtual ICar *createCar() = 0; //生产汽车
    virtual ~IFactory() {};
};

// IFactory::~IFactory()
// {
// }

#endif // FACTORY_H
