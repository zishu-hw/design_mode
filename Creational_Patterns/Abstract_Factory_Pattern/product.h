/*
 * ==============================================================
 *
 *       FileName: product.h
 *    Description: 产品抽象类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-29 10:39:33
 *  Last Modified: 2018-07-30 10:28:33
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
    virtual std::string name() = 0;
    virtual ~ICar() {};
};

class IBike
{
public:
    virtual std::string name() = 0;
    virtual ~IBike() {};
};

#endif // PRODUCT_H
