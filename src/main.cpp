#include <iostream>
#include <string>
#include "command.hpp"

int main(int argc, char **argv) {
    try 
    {
        Command command(argc, argv);
    }
    catch (std::invalid_argument& e)
    {
        std::cout << e.what();
        return -1;
    }
}
