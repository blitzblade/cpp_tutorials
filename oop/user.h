#ifndef USER_H
#define USER_H

class User
{
    std::string status = "Gold";
    static int user_count;

public:
    static int get_user_count();
    std::string first_name;
    std::string last_name;
    std::string get_status();

    void set_status(std::string status);

    User();
    User(std::string first_name, std::string last_name);
    ~User();

    virtual void output();

    // friend void output_status(User user);
    // friend std::ostream &operator<<(std::ostream &output, User user);
    // friend std::istream &operator>>(std::istream &input, User &user);
};

#endif