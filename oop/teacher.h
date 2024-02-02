#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <string>
#include "user.h"
#include <vector>

class Teacher : public User
{
public:
    std::vector<std::string> classes_teaching;
    void output();
};

#endif