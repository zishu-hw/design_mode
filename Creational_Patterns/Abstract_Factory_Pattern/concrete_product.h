/*
 * ==============================================================
 *
 *       FileName: concrete_product.h
 *    Description: 产品具体类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-29 10:41:41
 *  Last Modified: 2018-07-30 10:23:19
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H
#include "product.h"

class BenzCar : public ICar
{
public:
    std::string name() { return "Benz Car"; }
};

class BmwCar : public ICar
{
public:
    std::string name() { return "Bmw Car"; }
};

class AudiCar : public ICar
{
public:
    std::string name() { return "Audi Car"; }
};

class BenzBike: public IBike
{
public:
    std::string name() { return "Benz Bike"; }
};

class BmwBike: public IBike
{
public:
    std::string name() { return "Bmw Bike"; }
};

class AudiBike: public IBike
{
public:
    std::string name() { return "Audi Bike"; }
};
#endif // CONCRETE_PRODUCT_H
