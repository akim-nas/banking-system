#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include <fstream>

namespace admn {
    class Create {
    private:
        void StoreInfo() {
            std::ofstream datafile;

            datafile.open("storage.txt", std::ios::out | std::ios::app);

            datafile << this->new_uname   << "\n";
            datafile << this->new_pwd     << "\n";
            datafile << this->new_balance << "\n\n";

            datafile.close();
        }

    public:
        std::string new_uname, new_pwd;
        static int new_balance;

        Create(std::string name, std::string pwd);
    };
}

#endif
