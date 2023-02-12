#include <iostream>
#include <limits>

#include "../include/functions.h"

#define MIN 0
#define MAX 100
#define STREAM std::numeric_limits<std::streamsize>::max()

/* Input for number types */
int UserInput(int min = MIN, int max = MAX) {
    int usr_inp;

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
