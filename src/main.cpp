#include <iostream>
#include <string>
#include "../parser/parser.hpp"

extern bool parse_str (const std::string& expression, int& ans);

int main (int argc, char* argv[]) {
    std::cout << "Welcome to Simple Calculator!" << std::endl;
    std::cout << "> Type 'quit' to stop the program\n" << std::endl;

    std::string exp;
    int ans;
    while (true) {
        std::cout << "> ";
        std::getline(std::cin, exp);
        if (exp == "quit") {
            break;
        }
        else if (parse_str(exp, ans)) {
            std::cout << "Answer: " << ans << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
