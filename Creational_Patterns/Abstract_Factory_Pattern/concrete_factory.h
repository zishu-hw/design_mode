/*
 * ==============================================================
 *
 *       FileName: concrete_factory.h
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-29 11:37:05
 *  Last Modified: 2018-07-30 10:43:37
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_FACTORY_H
#define CONCRETE_FACTORY_H

#include "concrete_product.h"
#include "factory.h"

// 奔驰工厂
class BenzFactory : public AFactory
{
public:
    ICar *createCar() { return new BenzCar(); }

    IBike *createBike() { return new BenzBike(); }
    // ~BenzFactory() = default;
};

// 宝马工厂
class BmwFactory : public AFactory
{
public:
    ICar *createCar() { return new BmwCar(); }

    IBike *createBike() { return new BmwBike(); }
    // ~BmwFactory() = default;
};

// 奥迪工厂
class AudiFactory : public AFactory
{
public:
    ICar *createCar() { return new AudiCar(); }

    IBike *createBike() { return new AudiBike(); }
    // ~AudiFactory() = default;
};

#endif // CONCRETE_FACTORY_H
