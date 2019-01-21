/*
 * ==============================================================
 *
 *       FileName: director.h
 *    Description: 指挥者类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-30 15:39:16
 *  Last Modified: 2018-07-30 15:54:55
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "builder.h"
class Director
{
public:
    void create(Builder *builder)
    {
        builder->buildCpu();
        builder->buildMainboard();
        builder->buildRam();
        builder->buildVideoCard();
    }
    ~Director() = default;
};

#endif // DIRECTOR_H
