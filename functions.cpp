#include <iostream>
#include <cmath>


double power(double, int);
void print_pow(double, int);

int main(){
    int base, exponent;
    std::cout << "What is the base?: ";
    std::cin >> base;
    std::cout << "What is the exponent?: ";
    std::cin >> exponent;

    print_pow(base, exponent);

    
    return 0;
}

double power(double base, int exponent){
    double result = 1;
    for(int i=0; i< exponent; i++){
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent){
    double myPower = power(base, exponent);
    std::cout <<base<<" raised to the  " << exponent << " power is " << myPower << std::endl;
}