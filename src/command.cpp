#include <stdexcept>
#include <iostream>
#include "command.hpp"

Command::Command(int& argc, char** argv){
    if (argc != 2){
        throw std::invalid_argument("Error: unknown command. Use `day help` to see available commands\n");
    }

    if (std::string(argv[1]) == "help" || std::string(argv[1]) == "--help") {
        Command::help();
    }else{
        throw std::invalid_argument("Error: unknown command. Use `day help` to see available commands\n");    
    }
}

void Command::help(){
    std::cout << "Usage:\n";
    std::cout << "day      - show statistic of this day\n";
    std::cout << "day add  - add new task to do every day\n";
    std::cout << "day rem  - remove the task\n";
    std::cout << "day stat - show statistic of the last 7 day\n";
    std::cout << "day done - select task and complete it\n";
    std::cout << "day undo - select task and uncomplete it\n";
    std::cout << "day help - show available commands\n";
}
