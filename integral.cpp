#include <iostream>
#include <climits>

int main(){
    short a;
    int b;
    long c;
    long long d;

    unsigned short aa;
    unsigned int bb;
    unsigned long long dd;

    std::cout << sizeof(long long) << std::endl;
    std::cout << ULLONG_MAX << std::endl;
}