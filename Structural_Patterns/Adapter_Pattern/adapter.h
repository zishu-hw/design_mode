/*
 * ==============================================================
 *
 *       FileName: adapter.h
 *    Description: 适配器
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-30 17:18:00
 *  Last Modified: 2018-07-30 17:25:48
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef ADAPTER_H
#define ADAPTER_H

#include "adaptee.h"
#include "target.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p)                                                                                                                               \
    {                                                                                                                                                \
        if (p) {                                                                                                                                     \
            delete (p);                                                                                                                              \
            (p) = NULL;                                                                                                                              \
        }                                                                                                                                            \
    }
#endif

// 对象适配器模式
#if 0
class PowerAdapter : public IRussiaSocket
{
public:
    PowerAdapter() : m_charger(new OwnCharger()){};
    ~PowerAdapter() { SAFE_DELETE(m_charger); }

    void charge() { m_charger->chargeWithFeetFlat(); }

private:
    OwnCharger *m_charger;
};
#else
// 电源适配器模式
class PowerAdapter : public IRussiaSocket, OwnCharger
{
public:
    PowerAdapter() = default;
    void charge() { chargeWithFeetFlat(); }

private:
    /* data */
};
#endif

#endif // ADAPTER_H
