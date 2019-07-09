//
// Created by 张啸宇 on 2019-07-08.
//

#include "student_test.h"


student_test::student_test(student student1,
                           const vector<homework> &homeworkList) : student(student1.getName(), student1.getAge(), student1.getSchool(), student1.getMajor(), "test",
                                                                           homeworkList) {}
