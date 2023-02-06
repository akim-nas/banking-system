#include <iostream>
#include <fstream>
#include <cstring>

#include "User.h"

int Create::new_balance = 0;

Create::Create(std::string name, std::string pwd) {
    new_uname = name;
    new_pwd   = pwd;

    StoreInfo();
}

void Create::StoreInfo() {
    std::ofstream file;

    file.open("storage.txt", std::ofstream::out | std::ofstream::app);
        file << new_uname   << "\n";
        file << new_pwd     << "\n";
        file << new_balance << "\n\n";
    file.close();
}
