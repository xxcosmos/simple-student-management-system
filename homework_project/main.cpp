//
// Created by 张啸宇 on 2019-07-08.
//
#include <iostream>
#include <vector>
#include "homework.h"
#include "student_dev.h"
#include "../student_project/student_utils.h"
#include "student_test.h"

int main(){
    vector<homework> homework_list;
    vector<student> student_list;
    std::string operation;
    while (getline(std::cin, operation)){
        if(operation=="new student dev"){
            student student = student_dev(input_student_information());
            student_list.push_back(student);
            cout<<"成功创建开发类学生"<<endl;
            continue;
        }

        if (operation=="new student test"){
            student student1 =  student_test(input_student_information());
            student_list.push_back(student1);
            cout<<"成功创建测试类学生"<<endl;
            continue;
        }

        if(operation=="new task"){
            if(homework_list.size()>20){
                cout<<"作业数量已达上限20，无法创建作业。"<<endl;
                continue;
            }
            string name;
            cout<<"请输入作业名称:";
            cin>>name;
            homework homework(name);
            homework_list.push_back(homework);
            cout<<"成功创建作业"<<endl;
            continue;
        }

        if(operation == "do task"){
            for (auto stu : student_list){
                for (auto task:homework_list){
                    task.do_homework(stu);
                }
            }
        }


    }

        return 0;
}
