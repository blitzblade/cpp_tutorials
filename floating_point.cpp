#include <iostream>
#include <float.h>

int main(){

    float a = 10.0 / 3;
    a = a * 10000000000;
    double b;
    long double c;

    std::cout << std::fixed << a << std::endl; //not trustworthy
    std::cout << FLT_DIG << std::endl;
    std::cout << DBL_DIG << std::endl;
    //doubles are more trustworthy than floats
    return 0;
}