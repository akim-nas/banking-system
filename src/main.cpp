#include <iostream>
#include <string>
#include <limits>

#include "../include/functions.h"

#define STREAM std::numeric_limits<std::streamsize>::max()

int main() {
    std::string name, pwd;
    int num;
    
    std::cout << "Input num: ";
    num = UserInput(1, 100);

    std::cout << "Name: ";

    std::cin.ignore();
    name = UserInput();
    std::cout << "Pwd: ";
    pwd = UserInput();

    std::cout << num << "\n"
              << name << "\n"
              << pwd;

    return 0;
}
