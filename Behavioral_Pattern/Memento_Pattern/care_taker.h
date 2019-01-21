/*
 * ==============================================================
 *
 *       FileName: care_taker.h
 *    Description: 管理者
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 15:47:45
 *  Last Modified: 2018-08-06 15:54:25
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CARE_TAKER_H
#define CARE_TAKER_H

#include "originator.h"
#include <iostream>
#include <vector>

// 月光宝盒
class PandorBox
{
public:
    PandorBox(Life *life) : m_plife(life) {}
    ~PandorBox()
    {
        for (int i = 0; i < (int)m_history.size(); ++i) {
            delete m_history.at(i);
        }
        m_history.clear();
    }
    // 备份
    void save()
    {
        std::cout << "save ..." << std::endl;
        m_history.push_back(m_plife->createMemento());
    }
    // 穿越至上一时刻
    void undo()
    {
        std::cout << "undo ..." << std::endl;
        m_plife->setMemento(m_history.back());
        m_history.pop_back();
    }

private:
    Life *m_plife;
    std::vector<DateTime *> m_history;
};

#endif // CARE_TAKER_H
