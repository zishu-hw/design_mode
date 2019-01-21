/*
 * ==============================================================
 *
 *       FileName: context.h
 *    Description: 环境角色
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 16:56:33
 *  Last Modified: 2018-08-06 17:06:02
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONTEXT_H
#define CONTEXT_H

#include "strategy.h"

class Context
{
public:
    Context(IStrategy *strategy) { m_pStrategy = strategy; }
    void Travel() { m_pStrategy->travel(); }

private:
    IStrategy *m_pStrategy;
};

#endif // CONTEXT_H
