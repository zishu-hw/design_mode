/*
 * ==============================================================
 *
 *       FileName: composite.h
 *    Description: 创建容器构件
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 19:45:07
 *  Last Modified: 2018-08-01 19:55:00
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include <vector>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p)                                                                                                                               \
    {                                                                                                                                                \
        if (p) {                                                                                                                                     \
            delete (p);                                                                                                                              \
            (p) = NULL;                                                                                                                              \
        }                                                                                                                                            \
    }
#endif

class Composite : public Component
{
public:
    Composite(std::string name) : Component(name) {}
    virtual ~Composite()
    {
        while (!m_elements.empty()) {
            std::vector<Component *>::iterator it = m_elements.begin();
            SAFE_DELETE(*it);
            m_elements.erase(it);
        }
    }
    void add(Component *cmpt) override { m_elements.push_back(cmpt); }
    void remove(Component *cmpt) override
    {
        std::vector<Component *>::iterator it = m_elements.begin();
        while (it != m_elements.end()) {
            if (*it == cmpt) {
                SAFE_DELETE(cmpt);
                m_elements.erase(it);
                break;
            }
            ++it;
        }
    }
    Component *getChild(int index) override
    {
        if (index >= (int)m_elements.size())
            return NULL;

        return m_elements[index];
    }
    // 递归显示
    void operation(int indent) override
    {
        std::string newStr(indent, '-');
        std::cout << newStr << "+ " << m_strName << std::endl;
        // 显示每个节点的孩子
        std::vector<Component *>::iterator it = m_elements.begin();
        while (it != m_elements.end()) {
            (*it)->operation(indent + 2);
            ++it;
        }
    }

private:
    Composite(); // 不允许
    std::vector<Component *> m_elements;
};

#endif // COMPOSITE_H
