#include <stdexcept>
#include "command.hpp"

Command::Command(int& flag_argc, char** flag_argv){
    if (flag_argc > 2){
        throw std::invalid_argument("Error: unknown command. Use `day help` to see available commands\n");
    }
}

