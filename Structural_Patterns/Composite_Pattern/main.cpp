/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-01 19:55:19
 *  Last Modified: 2018-08-01 20:14:39
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "composite.h"
#include "leaf.h"

int main()
{
    // 创建一个树形结构
    // 创建根节点
    Component *pRoot = new Composite("江湖公司（任我行）");

    // 创建分支
    Component *pDepart1 = new Composite("日月神教（东方不败）");
    pDepart1->add(new Leaf("光明左使（向问天）"));
    pDepart1->add(new Leaf("光明右使（曲洋）"));
    pRoot->add(pDepart1);

    Component *pDepart2 = new Composite("五岳剑派（左冷蝉）");
    pDepart2->add(new Leaf("嵩山（左冷蝉）"));
    pDepart2->add(new Leaf("衡山（莫大）"));
    pDepart2->add(new Leaf("华山（岳不群）"));
    pDepart2->add(new Leaf("泰山（天门道长）"));
    pDepart2->add(new Leaf("恒山（定闲师太）"));
    pRoot->add(pDepart2);

    // 添加和删除叶子
    pRoot->add(new Leaf("少林（方证大师）"));
    pRoot->add(new Leaf("武当（冲虚道长）"));
    Component *pLeaf = new Leaf("青城（余沧海）");
    pRoot->add(pLeaf);

    // 小丑，直接裁掉
    pRoot->remove(pLeaf);

    // 递归地显示组织架构
    pRoot->operation(1);

    // 删除分配的内存
    SAFE_DELETE(pRoot);

    getchar();

    return 0;
}
