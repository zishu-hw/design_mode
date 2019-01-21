/*
 * ==============================================================
 *
 *       FileName: main.cpp
 *    Description:
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-02 10:31:49
 *  Last Modified: 2018-08-02 10:44:13
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "concrete_flyweight.h"
#include "flyweight_factory.h"
#include <ctime>
#include <vector>

std::map<std::string, IPlayer *> PlayerFactory::m_map = std::map<std::string, IPlayer *>();

// 玩家类型和武器
static std::string s_playerType[2] = {"T", "CT"};
static std::string s_weapons[4] = {"AK-47", "Maverick", "Gut Knife", "Desert Eagle"};

#define GET_ARRAY_LEN(array, len)                                                                                                                    \
    {                                                                                                                                                \
        len = (sizeof(array) / sizeof(array[0]));                                                                                                    \
    }

int main()
{
    srand((unsigned)time(NULL));

    int playerLen;
    int weaponsLen;
    GET_ARRAY_LEN(s_playerType, playerLen);
    GET_ARRAY_LEN(s_weapons, weaponsLen);
    std::vector<IPlayer *> p(10);
    // 假设，游戏中有十位玩家
    for (int i = 0; i < 10; i++) {
        // 获取随机玩家和武器
        int typeIndex = rand() % playerLen;
        int weaponIndex = rand() % weaponsLen;
        std::string type = s_playerType[typeIndex];
        std::string weapon = s_weapons[weaponIndex];

        // 获取玩家
        p[i] = PlayerFactory::getPlayer(type);

        // 从武器库中随机分配武器
        p[i]->assignWeapon(weapon);
        std::cout << i << std::endl;
        // 派玩家去执行任务
        p[i]->mission();
        // 外部状态是随环境改变而改变的、不可以共享的状态。
        // 享元对象的外部状态必须由客户端保存，并在享元对象被创建之后，
        // 在需要使用的时候再传入到享元对象内部。
    }
    return 0;
}
