#include <iostream>
#include <limits>
#include <cstring>

#define STREAM std::numeric_limits<std::streamsize>::max()

int UserInput(int min = 0, int max = 0) {
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
    std::cin >> user_input;

    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(STREAM, '\n');

        std::cout << "Invalid input: ";

        std::cin  >> user_input;
    }
    return user_input;
}
