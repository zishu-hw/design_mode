/*
 * ==============================================================
 *
 *       FileName: concrete_visitor.h
 *    Description: 具体访问者
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 21:39:18
 *  Last Modified: 2018-08-06 21:42:41
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef CONCRETE_VISITOR_H
#define CONCRETE_VISITOR_H

#include "concrete_element.h"
#include "visitor.h"
#include <iostream>

// 游客
class Tourist : public IVisitor
{
public:
    void visit(BellTower *) override { std::cout << "I'm visiting the Bell Tower!" << std::endl; }
    void visit(TerracottaWarriors *) override { std::cout << "I'm visiting the Terracotta Warriors!" << std::endl; }
};

// 清洁工
class Cleaner : public IVisitor
{
public:
    virtual void visit(BellTower *) override { std::cout << "I'm cleaning up the garbage of Bell Tower!" << std::endl; }

    virtual void visit(TerracottaWarriors *) override { std::cout << "I'm cleaning up the garbage of Terracotta Warriors!" << std::endl; }
};

#endif // CONCRETE_VISITOR_H
