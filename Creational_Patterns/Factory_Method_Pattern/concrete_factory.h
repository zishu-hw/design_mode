/*
 * ==============================================================
 *
 *       FileName: concrete_factory.h
 *    Description: 具体工厂类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-28 16:25:39
 *  Last Modified: 2018-07-28 16:47:00
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H
#include "concrete_product.h"
#include "factory.h"

class BenzFactory : public IFactory
{
    ICar *createCar() { return new BenzCar(); }
    ~BenzFactory() = default;
};

class BmwFactory : public IFactory
{
    ICar *createCar() { return new BmwCar(); }
};

class AudiFactory : public IFactory
{
    ICar *createCar() { return new AudiCar(); }
};

#endif // CONCRETE_FACTORY_H
