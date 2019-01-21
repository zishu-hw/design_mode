/*
 * ==============================================================
 *
 *       FileName: target.h
 *    Description: 目标接口
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-30 17:14:04
 *  Last Modified: 2018-07-30 17:22:50
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef TARGET_H
#define TARGET_H

// 俄罗斯提供的插座
class IRussiaSocket
{
public:
    //使用双脚圆形充电（暂不实现）
    virtual void charge() = 0;
    virtual ~IRussiaSocket() = default;
};

#endif // TARGET_H
