//
// Created by 张啸宇 on 2019-07-08.
//

#ifndef STUDENT_DEMO_STUDENT_DEV_H
#define STUDENT_DEMO_STUDENT_DEV_H

#include <string>
#include "../student_project/student.h"

class student_dev : public student {
public:
    student_dev();

    virtual ~student_dev();

    student_dev( string name, int age,  string school,  string major);
};


#endif //STUDENT_DEMO_STUDENT_DEV_H
