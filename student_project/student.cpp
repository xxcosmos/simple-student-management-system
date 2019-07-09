#include <utility>



//
// Created by 张啸宇 on 2019-07-08.
//

#include "student.h"

using std::endl;

// 学生全局唯一索引
int student_index = 1;


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

void student::setName(const string &basicString) {
    student::name = basicString;
}

int student::getAge() const {
    return age;
}

void student::setAge(int i) {
    student::age = i;
}

const string &student::getSchool() const {
    return school;
}

void student::setSchool(const string &basicString) {
    student::school = basicString;
}

const string &student::getMajor() const {
    return major;
}

void student::setMajor(const string &basicString) {
    student::major = basicString;
}

student::student(string name, int age, string school, string major) : id(2015000 + student_index++),
                                                                      name(std::move(name)),
                                                                      age(age),
                                                                      school(std::move(school)),
                                                                      major(std::move(major)) {}

const string &student::getType() const {
    return type;
}

void student::setType(const string &type) {
    student::type = type;
}

student::student(string name, int age, string school, string major, string type) : id(2015000 + student_index++),
                                                                                   name(std::move(name)), age(age),
                                                                                   school(std::move(school)),
                                                                                   major(std::move(major)),
                                                                                   type(std::move(type)) {}

student::student() {}

student::~student() {

}

//homework *student::getHomeworkList() const {
//    return homework_list;
//}
//
//void student::setHomeworkList(homework *homeworkList) {
//    homework_list = homeworkList;
//}

//const vector<homework> &student::getHomeworkList() const {
//    return homework_list;
//}
//
//void student::setHomeworkList(const vector<homework> &homeworkList) {
//    homework_list = homeworkList;
//}
