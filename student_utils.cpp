//
// Created by 张啸宇 on 2019-07-08.
//

#include "student_utils.h"
#include <vector>
#include <iostream>
#include "student.h"

using namespace std;


// 学生全局唯一索引
int student_index = 1;


void print_info() {
    cout << "欢迎进入学生信息管理系统！" << endl;
    cout << "操作如下：" << endl;
    cout << "新建学生：new student" << endl;
    cout << "查看全部学生信息：list student" << endl;
    cout << "删除学生信息：delete student" << endl;
    cout << "修改学生信息：update student" << endl;
    cout << "-------------------------------" << endl;
}


bool is_full(const vector<student> &v) {
    return v.size() > 30;
}


void print_student_list(vector<student> student_list) {
    cout << "共有学生 " << student_list.size() << " 名" << endl;
    for (int i = 0; i < student_list.size(); ++i) {
        cout << "----------------第" << i + 1 << "名学生信息----------------" << endl;
        cout << student_list[i] << endl;
    }
}


student input_student_information() {
    string name, school, major;
    int age;

    cout << "请输入学生姓名:" << endl;
    cin >> name;

    cout << "请输入学生年龄:" << endl;
    cin >> age;

    cout << "请输入学生学校:" << endl;
    cin >> school;

    cout << "请输入学生专业：" << endl;
    cin >> major;
    student student(name, age, school, major, student_index++);
    string temp;
    getline(cin, temp);
    return student;
}


int get_student_index(vector<student> student_list, int id) {
    int index = -1;
    for (int i = 0; i < student_list.size(); ++i) {
        student temp = student_list[i];
        if (temp.getId() == id) {
            index = i;
            break;
        }
    }
    return index;
}


bool delete_student(vector<student> &student_list) {
    cout << "请输入要删除学生的学号:" << endl;
    int id;
    cin >> id;
    string temp;
    getline(cin, temp);
    int index = get_student_index(student_list, id);
    if (index == -1) {
        cout << "删除失败，学号不存在！" << endl;
        return false;
    } else {
        auto it = student_list.begin() + index;
        student_list.erase(it);
        cout << "删除成功！" << endl;
        return true;
    }
}


bool update_student(vector<student> &student_list) {
    cout << "请输入想要修改学生的学号:";
    int id;
    cin >> id;
    string temp;
    getline(cin, temp);
    int index = get_student_index(student_list, id);
    if (index == -1) {
        cout << "学号不存在，请检查输入！" << endl;
        return false;
    } else {
        cout << "请输入想要修改学生的信息：" << endl;
        cout << "1 姓名 2 年龄 3 学校 4 专业" << endl;
        int operation;
        cin >> operation;
        string s;
        switch (operation) {
            case 1:
                cout << "请输入新的学生姓名" << endl;
                cin >> s;
                student_list[index].setName(s);
                getline(cin, s);
                cout<<"修改成功"<<endl;
                break;
            case 2:
                cout << "请输入新的学生年龄" << endl;
                int age;
                cin >> age;
                student_list[index].setAge(age);
                cout<<"修改成功"<<endl;
                getline(cin, s);
                break;
            case 3:
                cout << "请输入新的学生学校" << endl;
                cin >> s;
                student_list[index].setSchool(s);
                cout<<"修改成功"<<endl;
                getline(cin,s);
                break;
            case 4:
                cout << "请输入新的学生专业" << endl;
                cin >> s;
                student_list[index].setMajor(s);
                getline(cin,s);
                cout<<"修改成功"<<endl;
                break;
            default:
                cout << "输入命令有误。" << endl;
        }
        return true;

    }


}