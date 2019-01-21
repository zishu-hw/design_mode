/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description: 
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 10:58:16
 *  Last Modified: 2018-08-06 11:02:58
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "concrete_subject.h"
#include "concrete_observer.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main(void)
{
    // 创建主题, 观察者
    ConcreteSubject *pSubject = new ConcreteSubject();    
    IObserver *pObserver1 = new ConcreteObserver("user1");
    IObserver *pObserver2 = new ConcreteObserver("user2");
    // 注册观察者
    pSubject->attach(pObserver1);
    pSubject->attach(pObserver2);
    // 更改价格,并通知观察者
    pSubject->setPrice(12.5);
    pSubject->notify();
    // 注销观察者2
    pSubject->detach(pObserver2);

    pSubject->setPrice(15.0);
    pSubject->notify();

    SAFE_DELETE(pObserver1);
    SAFE_DELETE(pObserver2);
    SAFE_DELETE(pSubject);

    return 0;
}
