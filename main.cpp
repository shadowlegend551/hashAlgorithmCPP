#include <iostream>
#include <string>

#include "hash.hpp"

int main()
{
    std::string name1;
    std::string name2;

    std::cout << "Enter first name: ";
    std::cin >> name1;
    std::cout << std::endl;
    std::cout << "Enter second name: ";
    std::cin >> name2;
    std::cout << std::endl;

    std::vector<std::string> names = {name1, name2};

    std::cout << hash(names, 100) << std::endl;
}