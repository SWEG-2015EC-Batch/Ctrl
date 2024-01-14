#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int main() {
  //4. Write an application that inputs a line of text, and tokenizes it. Use space characters as delimiters.
    std::string inputLine;

    // Input a line of text
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, inputLine);

    // Tokenize the input using space characters as delimiters
    std::istringstream tokenizer(inputLine);
    std::vector<std::string> tokens;
    std::string token;

    while (tokenizer >> token) {
        tokens.push_back(token);
    }

    // Display the tokens
    std::cout << "\nTokens (split by spaces):\n";
    for (const auto& t : tokens) {
        std::cout << t << "\n";
    }

    return 0;
}

