/*
 * ==============================================================
 *
 *       FileName: factory.cpp
 *    Description: 
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-29 11:36:31
 *  Last Modified: 2018-07-30 10:43:39
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#include "factory.h"
#include "concrete_factory.h"

// 创建工厂
AFactory* AFactory::createFactory(FACTORY_TYPE factory)
{
    AFactory *pFactory = NULL;
    switch (factory) {
    case FACTORY_TYPE::BENZ_FACTORY:  // 奔驰工厂
        pFactory = new BenzFactory();
        break;
    case FACTORY_TYPE::BMW_FACTORY:  // 宝马工厂
        pFactory = new BmwFactory();
        break;
    case FACTORY_TYPE::AUDI_FACTORY:  // 奥迪工厂
        pFactory = new AudiFactory();
        break;
    default:
        break;
    }
    return pFactory;
}
