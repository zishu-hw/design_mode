/*
 * ==============================================================
 *
 *       FileName: proxy.h
 *    Description: 代理类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-02 11:00:45
 *  Last Modified: 2018-08-02 11:03:02
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef PROXY_H
#define PROXY_H

#include "real_subject.h"
#include "subject.h"
#include <iostream>

class Proxy : public ITelco
{
public:
    Proxy() : m_pCMCC(NULL){};
    ~Proxy()
    {
        if (m_pCMCC != NULL) {
            delete m_pCMCC;
            m_pCMCC = NULL;
        }
    }
    // 低于 50 不充
    void recharge(int money) override
    {
        if (money >= 50) {
            if (m_pCMCC == NULL)
                m_pCMCC = new CMCC();
            m_pCMCC->recharge(money);
        } else {
            std::cout << "Sorry, too little money" << std::endl;
        }
    }

private:
    CMCC *m_pCMCC;
};

#endif // PROXY_H
