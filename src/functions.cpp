#include <iostream>
#include <limits>

#include "../include/functions.h"

#define STREAM std::numeric_limits<std::streamsize>::max()

/* Input for number types */
template<typename num>
num UserInput(int min, int max) { /* must use range */
    num usr_inp;

    std::cin >> usr_inp;
    while (std::cin.fail() || (usr_inp < min || usr_inp > max)) {
        std::cin.clear();
        std::cin.ignore(STREAM, '\n');

        std::cout << "Input is invalid, input again: ";
        std::cin >> usr_inp;
    }

    return usr_inp;
}

/* Input for strings: use std::cin.ignore() for string */
std::string UserInput() {
    std::string usr_inp;

    getline(std::cin, usr_inp);
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(STREAM, '\n');

        std::cout << "Input is invalid, input again: ";
        getline(std::cin, usr_inp);
    }

    return usr_inp;
}
