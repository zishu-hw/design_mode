/*
 * ==============================================================
 *
 *       FileName: concrete_observer.h
 *    Description: 具体观察者
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 10:55:42
 *  Last Modified: 2018-08-06 10:58:07
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H

#include "observer.h"
#include <iostream>
#include <string>
class ConcreteObserver : public IObserver
{
public:
    ConcreteObserver(std::string name) : m_strName(name) {}
    void update(float price) override { std::cout << m_strName << " - price: " << price << std::endl; }

private:
    std::string m_strName;
};

#endif // CONCRETE_OBSERVER_H
