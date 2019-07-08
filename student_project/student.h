//
// Created by 张啸宇 on 2019-07-08.
//

#ifndef STUDENT_DEMO_STUDENT_H
#define STUDENT_DEMO_STUDENT_H

#include <string>
#include <ostream>
#include "../homework_project/homework.h"

using std::string;
using std::ostream;
using std::vector;

/**
 * 学生类
 */
class student {
private:
    int id;
    string name;
    int age;
    string school;
    string major;
    string type;
//    homework* homework_list;
public:
//    homework *getHomeworkList() const;
//
//    void setHomeworkList(homework *homeworkList);

    student(string name, int age, string school, string major);

    friend ostream &operator<<(ostream &os, const student &student);

    int getId() const;


    const string &getName() const;

    void setName(const string &basicString);

    int getAge() const;

    const string &getType() const;

    void setType(const string &type);

    void setAge(int i);

    const string &getSchool() const;

    void setSchool(const string &basicString);

    const string &getMajor() const;

    void setMajor(const string &basicString);
};


#endif //STUDENT_DEMO_STUDENT_H
