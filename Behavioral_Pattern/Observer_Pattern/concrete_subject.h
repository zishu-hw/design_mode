/*
 * ==============================================================
 *
 *       FileName: concrete_subject.h
 *    Description: 具体主题
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 10:46:38
 *  Last Modified: 2018-08-06 11:02:30
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_SUBJECT_H
#define CONCRETE_SUBJECT_H

#include "observer.h"
#include "subject.h"
#include <iostream>
#include <list>

// 具体主题
class ConcreteSubject : public ISubject
{
public:
    ConcreteSubject() { m_fPrice = 10.0; }
    void setPrice(float price) { m_fPrice = price; }
    void attach(IObserver *observer) { m_observers.push_back(observer); }
    void detach(IObserver *observer) { m_observers.remove(observer); }
    void notify()
    {
        std::list<IObserver *>::iterator it = m_observers.begin();
        while (it != m_observers.end()) {
            (*it)->update(m_fPrice);
            ++it;
        }
    }

private:
    std::list<IObserver *> m_observers;
    float m_fPrice;
};

#endif // Cconcrete_subject.h
