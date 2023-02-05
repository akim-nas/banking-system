#ifndef CREATE
#define CREATE

#include <iostream>
#include <cstring>
#include <fstream>

class Create {
public:
    std::string new_user_name, new_pwd;

    Create(std::string name, std::string pwd);

private:
    void StoreInfo();
};

#endif /* CREATE */
