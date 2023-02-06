#include <iostream>
#include <limits>
#include <cstring>

#include "User.h"
#include "functions.h"

/* MACROS */
#define STREAM std::numeric_limits<std::streamsize>::max() /* cin.ignore() */

int main() {
    unsigned int log_or_create;

    std::cout << "The Intergalactic Space Bank of Santa Fe\n\n" /* prompt */
              << "[1] Create Account\n"                         /* prompt */
              << "[2] Login\n";                                 /* prompt */
    
    /* prevent unwanted input */
    log_or_create = UserInput(1, 2);


    switch (log_or_create) {
        case 1: { /* create account */
            std::string user_name, user_pwd; /* username password */

            /* get user name */
            std::cout << "Enter name for account: ";
            user_name = UserInput(); /* make input valid */

            /* get user pwd */
            std::cout << "Enter password for account: ";
            user_pwd = UserInput(); /* make input valid */

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
