#include <iostream>
#include <vector>

void print_vector(std::vector<int> &data) // pass by reference
{
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
}

int main()
{
    std::vector<int> data = {1, 2, 3};
    data.push_back(12);
    std::cout << data[data.size() - 1] << std::endl;
}