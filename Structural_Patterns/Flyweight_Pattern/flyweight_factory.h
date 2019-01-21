/*
 * ==============================================================
 *
 *       FileName: flyweight_factory.h
 *    Description: 享元工厂
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-02 10:25:55
 *  Last Modified: 2018-08-02 10:31:40
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef FLYWEIGHT_FACTORY_H
#define FLYWEIGHT_FACTORY_H

#include "concrete_flyweight.h"
#include <map>

class PlayerFactory
{
public:
    static IPlayer *getPlayer(std::string type)
    {
        IPlayer *p = NULL;
        if (m_map.find(type) != m_map.end()) {
            p = m_map[type];
        } else {
            if (type == "T") {
                std::cout << "Terrorist Created" << std::endl;
                p = new Terrorist();
            } else if (type == "CT") {
                std::cout << "Counter Terrorist Created" << std::endl;
                p = new CounterTerrorist();
            } else {
                std::cout << "Unreachable code!" << std::endl;
                return p;
            }
            // 一旦创建，将其插入到 map 中
            m_map.insert(std::make_pair(type, p));
        }

        return p;
    }

private:
    static std::map<std::string, IPlayer *> m_map;
};

#endif // FLYWEIGHT_FACTORY_H
