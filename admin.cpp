#include <fstream>

#include "admin.h"

int Admin::Create::new_balance = 0;

Admin::Create::Create(std::string name, std::string pwd) {
    new_uname = name;
    new_pwd   = pwd;

    StoreInfo();
}
