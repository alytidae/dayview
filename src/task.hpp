#include <string>
#include <iostream>

class Task {
    private:
        std::string name;
        bool status;
    public:
        Task(std::string name, bool status){
            name = name;
            status = status;
        }

        std::string get_name() const{
            return name;
        }

        bool get_status() const{
            return status;
        }
};
