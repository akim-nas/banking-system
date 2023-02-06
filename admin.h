#ifndef ADMIN_H
#define ADMIN_H

#include <string>

namespace Admin {
    class Create {
    public:
        std::string new_uname, new_pwd;
        static int new_balance;

        Create(std::string name, std::string pwd);

    private:
        void StoreInfo();
    };
}

#endif
