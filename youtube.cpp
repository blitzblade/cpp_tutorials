#include <iostream>
#include <cmath>
// using namespace std;
//using std::cout;
int main()
{
    int slices;
    std::cout << "How many slices you want? " << std::endl;
    std::cin >> slices;
    std::cout << "You have " << slices << " slices of pizza." << std::endl;
    double power = pow(2,5);
    std::cout << power;
    printf("%i\n", slices);
    return 0;
}