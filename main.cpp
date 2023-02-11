#include <iostream>
#include <limits>
#include <string>

#include "admin.h"
#include "functions.h"

/* MACROS */
#define STREAM std::numeric_limits<std::streamsize>::max() /* cin.ignore() */

int main() {
    unsigned int log_or_create;

    std::cout << "The Intergalactic Space Bank of Santa Fe\n\n" /* prompt */
              << "[1] Create Account\n"
              << "[2] Login\n\n"
              << "[3] Exit\n"
              << ">>> ";
    
    /* prevent unwanted input */
    log_or_create = UserInput(1, 2);

    std::string user_name, user_pwd;
    switch (log_or_create) {
        case 1: {/* create account */
            /* get user name */
            std::cout << "Enter name for account: ";
            user_name = UserInput(); /* make input valid */

            /* get user pwd */
            std::cout << "Enter password for account: ";
            user_pwd = UserInput(); /* make input valid */

            admn::Create NewUser(user_name, user_pwd); /* store info of new user */
            break;
        }

        case 2: /* login account */
            std::cout << "case 2";
            break;
    }
    return 0;
}
