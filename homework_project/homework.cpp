#include <utility>
#include <iostream>

//
// Created by 张啸宇 on 2019-07-08.
//

#include "homework.h"
#include "../common_utils.h"

// 作业全局唯一索引
int homework_index = 1;

homework::homework(string name) : name(std::move(name)), id(homework_index++), state("new") {}

int homework::getId() const {
    return id;
}

void homework::setId(int i) {
    homework::id = i;
}

const string &homework::getName() const {
    return name;
}

void homework::setName(const string &basicString) {
    homework::name = basicString;
}

const string &homework::getState() const {
    return state;
}

void homework::setState(const string &basicString) {
    homework::state = basicString;
}

void homework::do_homework(student student) {
    if (student.getType() == "dev") {
        cout << student.getName() << "做了" << this->getId() << ":" << this->getName() << "共有"
             << get_random_integer_number(1, 1000) << "行代码" << endl;
    } else if (student.getType() == "test") {
        cout<<student.getName()<<"做了"<<this->getId()<<":"<<this->getName()<<"共有"<<get_random_integer_number(1,100)<<"条测试用例"<<endl;
    }
    this->setState("done");
}
