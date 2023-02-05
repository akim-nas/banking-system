#include <iostream>
#include <fstream>
#include <cstring>

class Create {
public:
    std::string new_user_name, new_pwd;

    Create(std::string name, std::string pwd) {
        new_user_name = name;
        new_pwd = pwd;

        StoreInfo();
    }
    
private:
    void StoreInfo() {
        std::ofstream file;
        
        file.open("data/storage.txt", std::ofstream::out | std::ofstream::app);

            file << new_user_name << "\n";
            file << new_pwd << "\n\n";

        file.close();
    }
};
