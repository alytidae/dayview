#include "command.hpp"

bool extract_command(int& flag_argc, char** flag_argv){
    if (flag_argc > 2){
        return false;
    }
    return true;
}

