//
// Created by 张啸宇 on 2019-07-08.
//

#ifndef STUDENT_DEMO_STUDENT_TEST_H
#define STUDENT_DEMO_STUDENT_TEST_H


#include "../student_project/student.h"

class student_test : public student {
public:
    student_test(student student1,
                 const vector<homework> &homeworkList);


};


#endif //STUDENT_DEMO_STUDENT_TEST_H
