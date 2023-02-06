#include <fstream>
#include <string>

#include "admin.h"

int Admin::Create::new_balance = 0;

Admin::Create::Create(std::string name, std::string pwd) {
    new_uname = name;
    new_pwd   = pwd;

    StoreInfo();
}

void Admin::Create::StoreInfo() {
    std::ofstream file;

    file.open("storage.txt", std::ofstream::out | std::ofstream::app);
        file << new_uname   << "\n";
        file << new_pwd     << "\n";
        file << new_balance << "\n\n";
    file.close();
}
