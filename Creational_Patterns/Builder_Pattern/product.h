/*
 * ==============================================================
 *
 *       FileName: product.h
 *    Description: 产品类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-07-30 15:15:57
 *  Last Modified: 2018-07-30 15:52:44
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Computer
{
public:
    void setCpu(const std::string &cpu) { m_strCpu = cpu; }
    void setMainboard(const std::string &board) { m_strMainboard = board; }
    void setRam(const std::string &ram) { m_strRam = ram; }
    void setVideoCard(const std::string &videoCard) { m_strVideoCard = videoCard; }
    std::string getCpu() { return m_strCpu; }
    std::string getMainboard() { return m_strMainboard; }
    std::string getRam() { return m_strRam; }
    std::string getVideoCard() { return m_strVideoCard; }

private:
    /* data */
    std::string m_strCpu;
    std::string m_strMainboard;
    std::string m_strRam;
    std::string m_strVideoCard;
};

#endif // PRODUCT_H
