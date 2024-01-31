#include <iostream>
#include <string>

int main()
{
    enum seasons
    {
        summer,
        spring,
        fall,
        winter
    };

    // enum class Season {summer, spring, fall, winter}; //std c++ 11
    seasons now = winter;

    switch (now)
    {
    case summer:
        break;
    case spring:
        break;
    case fall:
        break;
    case winter:
        std::cout << "Stay warm!\n"
                  << std::endl;
        break;
    default:
        break;
    }
}