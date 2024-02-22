#include <stdexcept>
#include <iostream>
#include "command.hpp"
#include "task.hpp"
#include <map>
#include <vector> 

//TODO: rewrite this
std::map<std::string, std::vector<Task>> TEST_DAYS;

Command::Command(int& argc, char** argv){
    if (argc > 2){
        throw std::invalid_argument("Error: unknown command. Use `day help` to see available commands\n");
    }

    if (argc == 1) {
        Command::day_stat();
        return;
    }

    if (std::string(argv[1]) == "help" || std::string(argv[1]) == "--help") {
        Command::help();
    }else{
        throw std::invalid_argument("Error: unknown command. Use `day help` to see available commands\n");    
    }

}

void Command::day_stat(){
    //TODO: rewrite this
    std::vector<Task> current_day;
    current_day.push_back(Task("Buy a milk", false));
    current_day.push_back(Task("Go for a walk", true));
    current_day.push_back(Task("Lol", false));
    TEST_DAYS["22.02.2024"] = current_day;
    //

    std::cout << current_day[0].get_name() << "lol\n";
    
    for(const auto& pair: TEST_DAYS)
    {
        std::cout << pair.first << "\n";
        for (const auto& elem: pair.second) {
            std::cout << elem.get_name() << "-" << elem.get_status() << "\n";
        }
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
