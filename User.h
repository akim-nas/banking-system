#ifndef USER_H
#define USER_H

#include <iostream>
#include <fstream>
#include <cstring>

class Create {
public:
    std::string new_uname, new_pwd;
    static int new_balance;

    Create(std::string name, std::string pwd);

private:
    void StoreInfo();
};

#endif
