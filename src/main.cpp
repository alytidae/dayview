#include <iostream>
#include <string>
#include "command.hpp"

int main(int argc, char **argv) {
    if (!extract_command(argc, argv)) {
        std::cout << "Error: unknown command. Use `day help` to see available commands\n";
    }
}
