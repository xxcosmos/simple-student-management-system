//
// Created by 张啸宇 on 2019-07-08.
//

#ifndef STUDENT_DEMO_HOMEWORK_H
#define STUDENT_DEMO_HOMEWORK_H

#include <string>
#include "../student_project/student.h"

using namespace std;

class homework {
private:
    int id;
    string name;
    string state;
public:
    int getId() const;

    void setId(int i);

    const string &getName() const;

    void setName(const string &basicString);

    const string &getState() const;

    void setState(const string &basicString);

    explicit homework(string name);

    void do_homework(student student);
};


#endif //STUDENT_DEMO_HOMEWORK_H
