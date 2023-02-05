#include <iostream>
#include <fstream>
#include <cstring>

#include "create.h"

Create::Create(std::string name, std::string pwd) {
    new_user_name = name;
    new_pwd = pwd;

    StoreInfo();
}

void Create::StoreInfo() {
    std::ofstream file;

    file.open("storage.txt", std::ofstream::out | std::ofstream::app);
        file << new_user_name << "\n";
        file << new_pwd << "\n\n";
    file.close();
}
