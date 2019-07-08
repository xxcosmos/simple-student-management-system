//
// Created by 张啸宇 on 2019-07-08.
//

#ifndef STUDENT_DEMO_STUDENT_H
#define STUDENT_DEMO_STUDENT_H

#include <string>
#include <ostream>

using namespace std;


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
public:
    student(const string &name, int age, const string &school, const string &major,int num);

    friend ostream &operator<<(ostream &os, const student &student);

    int getId() const;


    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    const string &getSchool() const;

    void setSchool(const string &school);

    const string &getMajor() const;

    void setMajor(const string &major);
};


#endif //STUDENT_DEMO_STUDENT_H
