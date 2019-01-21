/*
 * ==============================================================
 *
 *       FileName: concrete_class.h
 *    Description: 具体类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-05 11:14:59
 *  Last Modified: 2018-08-05 11:26:22
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_CLASS_H
#define CONCRETE_CLASS_H

#include "abstract_class.h"

// 阿里
class Alibaba : public Company
{
public:
    void interview() override { std::cout << "First interview -> Second interview -> Third interview" << std::endl; }
    void offer() override { std::cout << "30W" << std::endl; }
};
// 腾讯
class Tencent : public Company
{
public:
    void interview() override { std::cout << "First interview -> Second interview " << std::endl; }
    void offer() override { std::cout << "25W" << std::endl; }
};

#endif // CONCRETE_CLASS_H
