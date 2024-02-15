#include <iostream>
#include <string>

bool extract_command(int& flag_argc, char** flag_argv){
    if (flag_argc > 2){
        return false;
    }

    for (int i = 0; i < flag_argc; i++)
        printf("argv[%d] = %s\n", i, flag_argv[i]);
    return false;
}

int main(int argc, char **argv) {
    if (!extract_command(argc, argv)) {
        std::cout << "Error: unknown command. Use `day help` to see available commands\n";
    }
}
