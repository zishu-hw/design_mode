/*
 * ==============================================================
 *
 *       FileName: element.h
 *    Description: 元素
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 21:42:54
 *  Last Modified: 2018-08-06 21:43:12
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef ELEMENT_H
#define ELEMENT_H

class IVisitor;

// 地方
class IPlace
{
public:
    virtual ~IPlace() {}
    virtual void accept(IVisitor *visitor) = 0;
};

#endif //ELEMENT_H
