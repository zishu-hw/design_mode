/*
 * ==============================================================
 *
 *       FileName: command.h
 *    Description: 抽象命令类
 *
 *         Author: zhaiyu, zishuzy@gmail.com
 *        Created: 2018-08-05 11:32:32
 *  Last Modified: 2018-08-05 11:37:17
 *
 *  Copyright (C) 2018 zhaiyu. All rights reserved.
 *
 * ==============================================================
 */
#ifndef COMMAND_H
#define COMMAND_H

class IReciever;

// 执行命令的抽象
class Command
{
public:
    Command(IReciever *reciever);
    virtual ~Command() {}
    virtual int execute() = 0; // 执行命令

protected:
    IReciever *m_pReciever;
};
// 加法
class AddCommand : public Command
{
public:
    AddCommand(IReciever *reciever);
    int execute() override;
};
// 减法
class SubtractCommand : public Command
{
public:
    SubtractCommand(IReciever *reciever);
    int execute() override;
};

// 乘法
class MultiplyCommand : public Command
{
public:
    MultiplyCommand(IReciever *reciever);
    int execute() override;
};

// 除法
class DivideCommand : public Command
{
public:
    DivideCommand(IReciever *reciever);
    int execute() override;
};

#endif // COMMAND_H
