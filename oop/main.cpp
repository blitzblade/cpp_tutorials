#include <iostream>
#include <vector>
#include <string>
#include "user.h"

// struct User
// {
//     std::string first_name;
//     std::string last_name;
//     std::string get_status()
//     {
//         return status;
//     }

// private:
//     std::string status;
// };

void output_status(User user)
{
    std::cout << user.get_status();
}

int User::user_count = 0;

int add_user_if_not_exists(std::vector<User> &users, User user)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name == user.first_name && users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

std::ostream &operator<<(std::ostream &output, User user)
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name;
    return output;
}

std::istream &operator>>(std::istream &input, User &user)
{
    // std::cout << "Enter firstname: \n";
    // input >> user.first_name;
    // std::cout << "Enter last name: \n";
    // input >> user.last_name;

    input >> user.first_name >> user.last_name;
    return input;
}

int main()
{
    User me;

    me.first_name = "Sam";
    me.last_name = "Dadson";
    std::cout << "Status: " << me.get_status() << std::endl;

    std::cout << me << std::endl;

    std::vector<User> users;
    users.push_back(me);
}