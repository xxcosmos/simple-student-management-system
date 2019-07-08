//
// Created by 张啸宇 on 2019-07-08.
//

#include "student.h"


ostream &operator<<(ostream &os, const student &student) {
    os << "学号: " << student.id << endl;
    os << "姓名: " << student.name << endl;
    os << "年龄: " << student.age << endl;
    os << "学校: " << student.school << endl;
    os << "专业: " << student.major;
    return os;
}

int student::getId() const {
    return id;
}


const string &student::getName() const {
    return name;
}

void student::setName(const string &name) {
    student::name = name;
}

int student::getAge() const {
    return age;
}

void student::setAge(int age) {
    student::age = age;
}

const string &student::getSchool() const {
    return school;
}

void student::setSchool(const string &school) {
    student::school = school;
}

const string &student::getMajor() const {
    return major;
}

void student::setMajor(const string &major) {
    student::major = major;
}

student::student(const string &name, int age, const string &school, const string &major, int num) : id(2015000 + num),
                                                                                                    name(name),
                                                                                                    age(age),
                                                                                                    school(school),
                                                                                                    major(major) {}
