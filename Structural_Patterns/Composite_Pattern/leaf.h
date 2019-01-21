/*
 * ==============================================================
 *
 *       FileName: leaf.h
 *    Description: 叶子构件
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 19:40:50
 *  Last Modified: 2018-08-01 19:44:52
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef LEAF_H
#define LEAF_H

#include "component.h"

class Leaf : public Component
{
public:
    Leaf(std::string name) : Component(name) {}
    virtual ~Leaf() = default;
    void add(Component *cmpt) override { std::cout << "Can't add to a leaf" << std::endl; }

    void remove(Component *cmpt) override { std::cout << "Can't remove from a Leaf" << std::endl; }
    Component *getChild(int index) override
    {
        std::cout << "Can't get child from a Leaf" << std::endl;
        return NULL;
    }
    void operation(int indent) override
    {
        std::string newStr(indent, '-');
        std::cout << newStr << " " << m_strName << std::endl;
    }

private:
    Leaf(); // 不允许
};

#endif // LEAF_H
