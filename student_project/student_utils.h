//
// Created by 张啸宇 on 2019-07-08.
//

#ifndef STUDENT_DEMO_STUDENT_UTILS_H
#define STUDENT_DEMO_STUDENT_UTILS_H

#include "student.h"

using std::vector;

/**
 * 欢迎信息
 */
void print_info();


/**
 * 判断学生列表是否已满
 * @param v 学生列表
 * @return 已满 true
 */
bool is_full(const vector<student>& v);


/**
 * 打印学生列表
 * @param student_list 学生列表
 */
student input_student_information();


/**
 * 输入学生信息
 * @return 一个新的学生对象
 */
void print_student_list(vector<student> student_list);


/**
 * 删除学生信息
 * @param student_list 学生列表
 * @return 删除结果
 */
bool delete_student(vector<student>& student_list);


/**
 * 更新学生信息
 * @param student_list 要更新的学生的列表
 * @return 更新结果
 */
bool update_student(vector<student> & student_list);

#endif //STUDENT_DEMO_STUDENT_UTILS_H
