/*
 * ==============================================================
 *
 *       FileName: subject.h
 *    Description: 抽象主题
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-02 10:54:39
 *  Last Modified: 2018-08-02 10:58:16
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef SUBJECT_H
#define SUBJECT_H

// 电信营业厅
class ITelco
{
public:
    virtual ~ITelco(){};
    virtual void recharge(int money) = 0; // 充值
};

#endif // SUBJECT_H
