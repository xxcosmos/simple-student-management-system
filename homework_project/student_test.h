//
// Created by 张啸宇 on 2019-07-08.
//

#ifndef STUDENT_DEMO_STUDENT_TEST_H
#define STUDENT_DEMO_STUDENT_TEST_H


#include "../student_project/student.h"

class student_test : public student {
public:
    explicit student_test(const student &student1) : student(student1.getName(), student1.getAge(),
                                                             student1.getSchool(), student1.getMajor()) {
        this->setType("test");
//        this->setHomeworkList(nullptr);
    };


};


#endif //STUDENT_DEMO_STUDENT_TEST_H
