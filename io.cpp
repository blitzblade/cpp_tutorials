#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ofstream file;
    file.open("hello.txt", std::ios::app); // to enable append

    file << "hey";

    std::vector<std::string> names;

    for (std::string name : names)
    {
        file << name << std::endl;
    }

    // reading a file
    std::ifstream file1("hello.txt");

    std::vector<std::string> names;

    std::string input;

    while (file1 >> input)
    {
        names.push_back(input);
    }

    // get style
    std::ifstream file2("hello.txt");
    std::string line;
    getline(file2, line);
    std::cout << line << std::endl;
    return 0;
}