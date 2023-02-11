#include <iostream>
#include <limits>
#include <string>

#include "functions.h"
#include "admin.h"

#define STREAM std::numeric_limits<std::streamsize>::max()

int UserInput(int min, int max) {
    int user_input;
    std::cin >> user_input;

    while (std::cin.fail() || (user_input < min || user_input > max)) {
        std::cin.clear();
        std::cin.ignore(STREAM, '\n');

        std::cout << "Invalid input: ";

        std::cin  >> user_input;
    }
    return user_input;
}

std::string UserInput() {
    std::string user_input;
    std::cin.ignore();
    getline(std::cin, user_input);

    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(STREAM, '\n');

        std::cout << "Invalid input: ";
        getline(std::cin, user_input);
    }
    return user_input;
}
