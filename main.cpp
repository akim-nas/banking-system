#include <iostream>
#include <limits>

#include "create.h"

int main() {
    int log_or_create;

    std::cout << "The Intergalactic Space Bank of Santa Fe\n\n" /* prompt */
              << "[1] Create Account\n"                         /* prompt */
              << "[2] Login\n";                                 /* prompt */
    
    std::cin  >> log_or_create; /* user login/create response */

    /* prevent unwanted input */
    while (std::cin.fail() || (log_or_create < 1 || log_or_create > 2)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Invalid input, please input a number listed above: ";
        
        std::cin >> log_or_create;
    }

    switch (log_or_create) {
    case 1: /* create account */
        std::cout << "case 1";
        break;

    case 2: /* login account */
        std::cout << "case 2";
        break;
    }

    return 0;
}
