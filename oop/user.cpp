#include <iostream>
#include <string>
#include "user.h"

int User::get_user_count()
{
    return user_count;
}
std::string User::get_status()
{
    return status;
}

void User::set_status(std::string status)
{
    this->status = status;
}

User::User()
{
    user_count++;
    std::cout << "Contstructor";
}
User::User(std::string first_name, std::string last_name)
{
    this->first_name = first_name;
    this->last_name = last_name;
    user_count++;
}

User::~User()
{
    std::cout << "Destructor";
    user_count--;
}

void User::output()
{
    std::cout << "I am a user";
}

// void output_status(User user);
// std::ostream &operator<<(std::ostream &output, User user);
// std::istream &operator>>(std::istream &input, User &user);