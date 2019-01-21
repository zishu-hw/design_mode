/*
 * ==============================================================
 *
 *       FileName: company.h
 *    Description: 抽象类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-05 11:09:40
 *  Last Modified: 2018-08-05 11:23:36
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>

class Company
{
public:
    virtual ~Company() {}

    // 校园招聘
    void recruit()
    {
        std::cout << "---------- Begin ----------" << std::endl;
        careerTalk();
        receiveResume();
        interview();
        offer();
        std::cout << "---------- End ----------" << std::endl;
    }
    // 宣讲会
    void careerTalk() { std::cout << "Delivery" << std::endl; }
    // 接收简历
    void receiveResume() { std::cout << "Receive Resume" << std::endl; }
    // 面试
    virtual void interview() = 0;
    // 发放 Offer
    virtual void offer() = 0;
};

#endif // COMPANY_H
