/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-06 21:45:29
 *  Last Modified: 2018-08-06 21:52:27
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "concrete_visitor.h"
#include "object_structure.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p)                                                                                                                               \
    {                                                                                                                                                \
        if (p) {                                                                                                                                     \
            delete (p);                                                                                                                              \
            (p) = NULL;                                                                                                                              \
        }                                                                                                                                            \
    }
#endif

int main()
{
    City *city = new City();

    // 景点 - 钟楼、兵马俑
    IPlace *bellTower = new BellTower();
    IPlace *warriors = new TerracottaWarriors();

    // 访问者 - 游客、清洁工
    IVisitor *tourist = new Tourist();
    IVisitor *cleaner = new Cleaner();

    // 添加景点
    city->attach(bellTower);
    city->attach(warriors);

    // 接受访问
    city->accept(tourist);
    city->accept(cleaner);

    SAFE_DELETE(cleaner);
    SAFE_DELETE(tourist);
    SAFE_DELETE(warriors);
    SAFE_DELETE(bellTower);
    SAFE_DELETE(city);

    getchar();

    return 0;
}
