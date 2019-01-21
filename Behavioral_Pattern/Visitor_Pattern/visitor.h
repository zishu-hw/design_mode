/*
 * ==============================================================
 *
 *       FileName: visitor.h
 *    Description: 抽象访问者
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 21:38:39
 *  Last Modified: 2018-08-06 21:39:05
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef VISITOR_H
#define VISITOR_H

class BellTower;
class TerracottaWarriors;

// 访问者
class IVisitor
{
public:
    virtual ~IVisitor() {}
    virtual void visit(BellTower *) = 0;
    virtual void visit(TerracottaWarriors *) = 0;
};

#endif //VISITOR_H
