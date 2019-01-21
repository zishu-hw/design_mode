/*
 * ==============================================================
 *
 *       FileName: product.h
 *    Description: 抽象产品基类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-28 16:16:14
 *  Last Modified: 2018-07-28 17:06:44
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

class ICar
{
public:
    virtual std::string name() = 0; //汽车名称
    virtual ~ICar() {};
};


#endif // PRODUCT_H
