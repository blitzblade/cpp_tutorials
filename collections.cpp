#include <iostream>
#include <string>
#include <limits>

void print_array(int array[])
{
    std::cout << sizeof(array) << std::endl; // when an array is passed to a function, it decays to a pointer to the first element.
}
int main()
{
    const int SIZE = 100;
    int guesses[SIZE] = {12, 43, 23};
    int count = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (std::cin >> guesses[i])
        {
            count++;
        }
        else
        {
            // invalid character
            break;
        }
    }

    // int size = sizeof(guesses) / sizeof(int); // sizeof gives the size in bytes.
    print_array(guesses);
    std::cin.clear(); // clear
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}