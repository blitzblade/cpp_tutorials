#include <iostream>
#include <string>

int main(){
    // std::string greeting = "hello";
    // std::cout << greeting << std::endl;
    // std::cout << greeting.length() << std::endl;

    std::string greeting;
    // std::cin >> greeting;
    // std::cout << greeting << std::endl;

    getline(std::cin, greeting);
    //string methods
    //greeting.insert(3, "      ");
    //greeting.erase(3, 5);
    // greeting.pop_back(); //remove last character
    //greeting.replace(0, 4, "Heaven");

    //finding a specific string
    int index = greeting.find("hell");
    greeting.replace(index, 4, "****");

    //substring
    greeting.substr(5,2);
    std::cout << greeting << std::endl;

    
}