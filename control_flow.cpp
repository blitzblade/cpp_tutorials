#include <iostream>
#include <string>

int main()
{
    std::cout << "How old are you?: ";
    int age;

    std::cin >> age;

    if (age < 19)
    {
        std::cout << "You're almost 19\n";
    }
    else
    {
        std::cout << "False\n";
    }
}