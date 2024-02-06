#include <iostream>
#include <string>

bool isCommentLine(const std::string& input) {
    // Check if it starts with "//" indicating a single line comment
    if (input.find("//") == 0) {
        return true;
    }

    // Check if it starts with "/*" indicating a multi-line comment
    if (input.find("/*") == 0) {
        return true;
    }

    // If none of the above conditions are met, it's not a comment line
    return false;
}

int main() {
    std::string input;
    std::cout << "Enter input: ";
    std::getline(std::cin, input);

    if (isCommentLine(input)) {
        std::cout << "Given input is a comment line." << std::endl;
    } else {
        std::cout << "Given input is not a comment line." << std::endl;
    }

    return 0;
}

