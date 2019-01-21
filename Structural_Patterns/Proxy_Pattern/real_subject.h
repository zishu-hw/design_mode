/*
 * ==============================================================
 *
 *       FileName: real_subject.h
 *    Description: 真实主题
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-02 10:58:37
 *  Last Modified: 2018-08-02 11:00:03
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef REAL_SUBJECT_H
#define REAL_SUBJECT_H

#include "subject.h"
#include <iostream>

class CMCC : public ITelco
{
public:
    void recharge(int money) override { std::cout << "recharge " << money << std::endl; }
};

#endif // REAL_SUBJECT_H
