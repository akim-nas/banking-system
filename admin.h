#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include <fstream>

namespace Admin {
    class Create {
    private:
        void StoreInfo() {
            std::ofstream file("storage.txt", std::ofstream::out | std::ofstream::app);

            file << new_uname   << "\n";
            file << new_pwd     << "\n";
            file << new_balance << "\n\n";

            file.close();
        }

    public:
        std::string new_uname, new_pwd;
        static int new_balance;

        Create(std::string name, std::string pwd);
    };
}

#endif
