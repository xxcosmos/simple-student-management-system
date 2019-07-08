//
// Created by 张啸宇 on 2019-07-08.
//

#ifndef STUDENT_DEMO_STUDENT_DEV_H
#define STUDENT_DEMO_STUDENT_DEV_H

#include <string>
#include "../student_project/student.h"

class student_dev : public student {
public:
    student_dev(const student &student1) : student(student1.getName(), student1.getAge(), student1.getSchool(),
                                                   student1.getMajor()) {
        this->setType("dev");
//        this->setHomeworkList(
//                nullptr);
    };

};


#endif //STUDENT_DEMO_STUDENT_DEV_H
