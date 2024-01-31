#include <iostream>
#include <string>

int main(){

    char x = 'B';

    unsigned char y = 126;

    char16_t z = 150;
    /* 
    special chars:
    \n -> newline
    \t -> tab
    \v -> vertical tab
    \b -> backspace
    \a -> alert
    \0 -> null terminating
    */
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << (int) x << std::endl;
    std::cout << (int) y <<std::endl;
    std::cout << "Hello \a\a\a\a\a\a There" << std::endl;
    return 0;
}