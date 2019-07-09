

//
// Created by 张啸宇 on 2019-07-08.
//

#include "student_dev.h"


student_dev::student_dev(string name, int age, string school, string major) : student(std::move(name), age,
                                                                                      std::move(school),
                                                                                      std::move(major),
                                                                                      "dev") {}

student_dev::~student_dev() {

}

student_dev::student_dev() = default;
