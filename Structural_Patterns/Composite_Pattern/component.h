/*
 * ==============================================================
 *
 *       FileName: component.h
 *    Description: 抽象构建
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 19:38:12
 *  Last Modified: 2018-08-01 19:54:54
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>
#include <string>

class Component
{
public:
    Component(std::string name) : m_strName(name) {}
    virtual ~Component() = default;
    virtual void add(Component *cmpt) = 0;      //添加构件
    virtual void remove(Component *cmpt) = 0;   // 删除构件
    virtual Component *getChild(int index) = 0; // 获取构件
    virtual void operation(int indent) = 0;     // 显示构件（以缩进的方式）

protected:
    std::string m_strName;
};

#endif // COMPONENT_H
