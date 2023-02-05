#include <ios>
#include <iostream>
#include <limits>
#include <cstring>

#include "create.hpp"

int main() {
    unsigned int log_or_create;

    std::cout << "The Intergalactic Space Bank of Santa Fe\n\n" /* prompt */
              << "[1] Create Account\n"                         /* prompt */
              << "[2] Login\n";                                 /* prompt */
    
    std::cin  >> log_or_create; /* user login/create response */

    /* prevent unwanted input */
    while (std::cin.fail() || (log_or_create < 1 || log_or_create > 2)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Invalid input, please input a number listed above: ";
        
        std::cin  >> log_or_create;
    }


    switch (log_or_create) {
        case 1: { /* create account */
            std::string user_name, user_pwd; /* username password */

            /* get user name */
            std::cout << "Enter name for account: ";
            std::cin  >> user_name;

            /* make input valid */
            while (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << "Invalid input, please enter again: ";

                std::cin  >> user_name;
            }

            /* get user pwd */
            std::cout << "Enter password for account: ";
            std::cin  >> user_pwd;

            /* make input valid */
            while (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << "Invalid input, please enter again: ";

                std::cin  >> user_pwd;
            }

            Create NewUser(user_name, user_pwd); /* store info of new user */

            break;
        }

        case 2: { /* login account */
            std::cout << "case 2";
            break;
        }
    }

    return 0;
}
