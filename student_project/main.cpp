///**
// * @author: xiaoyuu
// * @version: 0.0.1
// * @date: 2019.07.08
// */
//
//#include <iostream>
//#include <vector>
//#include "student.h"
//#include "student_utils.h"
//
//using std::vector;
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main() {
//    vector<student> student_list;
//    print_info();
//
//    string operation;
//    //主循环
//    while (getline(cin, operation)) {
//        // 判断学生数量
//        if (is_full(student_list)) {
//            cout << "学生列表已满，无法插入新的学生信息。" << endl;
//            continue;
//        }
//        // 新建学生
//        if (operation == "new student") {
//            student student = input_student_information();
//            student_list.push_back(student);
//            cout << "成功新建学生信息！" << endl;
//            continue;
//        }
//        // 查看学生列表
//        if (operation == "list student") {
//            print_student_list(student_list);
//            continue;
//        }
//        // 删除学生信息
//        if (operation == "delete student") {
//            delete_student(student_list);
//            continue;
//        }
//
//        // 修改学生信息
//        if (operation == "update student") {
//            update_student(student_list);
//            continue;
//        }
//        cout << "输入命令有误，请重新输入。" << endl;
//    }
//    return 0;
//}