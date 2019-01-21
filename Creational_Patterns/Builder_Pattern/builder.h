/*
 * ==============================================================
 *
 *       FileName: builder.h
 *    Description: 抽象创建者
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-30 15:15:32
 *  Last Modified: 2018-07-30 15:55:05
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef BUILDER_H
#define BUILDER_H

#include "product.h"
class Builder
{
public:
    virtual void buildCpu() = 0;
    virtual void buildMainboard() = 0;
    virtual void buildRam() = 0;
    virtual void buildVideoCard() = 0;
    virtual Computer *getResult() = 0;
    virtual ~Builder() = default;
};

#endif // BUILDER_H
