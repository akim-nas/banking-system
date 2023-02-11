#include "admin.h"

int admn::Create::new_balance = 0;

admn::Create::Create(std::string name, std::string pwd) {
    this->new_uname = name;
    this->new_pwd   = pwd;

    StoreInfo();
}
