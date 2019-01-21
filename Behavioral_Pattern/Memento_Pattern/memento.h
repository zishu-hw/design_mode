/*
 * ==============================================================
 *
 *       FileName: memento.h
 *    Description: 备忘录
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 15:40:44
 *  Last Modified: 2018-08-06 15:43:12
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>
#include <string>

class DateTime
{
public:
    DateTime(std::string dt) : m_dateTime(dt) {}
    void setDateTime(std::string dt) { m_dateTime = dt; }
    std::string getDateTime() { return m_dateTime; }

private:
    std::string m_dateTime;
};

#endif // MEMENTO_H
