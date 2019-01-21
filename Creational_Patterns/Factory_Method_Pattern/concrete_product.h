/*
 * ==============================================================
 *
 *       FileName: concrete_product.h
 *    Description: 具体产品类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-28 16:19:49
 *  Last Modified: 2018-07-28 16:45:32
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
    ~BenzCar() = default;
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

#endif // CONCRETE_PRODUCT_H
