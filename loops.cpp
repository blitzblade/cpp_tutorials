#include <string>
#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }
    return 0;

    std::string password = "hellotacos123";
    std::string guess;
    do
    {
        std::cout << "Guess the password: " << std::endl;
        std::cin >> guess;
    } while (guess != password);
}