/*
 * ==============================================================
 *
 *       FileName: originator.h
 *    Description: 发起人
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 15:43:49
 *  Last Modified: 2018-08-06 15:47:29
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "memento.h"
#include <iostream>
#include <string>

class Life
{
public:
    void setDateTime(std::string dt)
    {
        std::cout << "set date time to " << dt << std::endl;
        m_dateTime = dt;
    }
    // 仅仅用于打印
    std::string getDateTime() { return m_dateTime; }
    // 恢复日期时间
    void setMemento(DateTime *dt) { m_dateTime = dt->getDateTime(); }
    // 创建日期时间
    DateTime *createMemento() { return new DateTime(m_dateTime); }

private:
    std::string m_dateTime;
};

#endif // ORIGINATOR_H
