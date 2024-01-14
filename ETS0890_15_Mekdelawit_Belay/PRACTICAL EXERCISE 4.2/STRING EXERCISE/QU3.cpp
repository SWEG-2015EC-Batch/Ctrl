#include <iostream>
#include <cctype> // For using isalpha function

int main() {
 // 3. Write a program to remove non-alphabet character from string
    std::string inputString;
    std::string resultString;

    // Input a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Remove non-alphabetic characters from the string
    for (char ch : inputString) {
        if (std::isalpha(ch)) {
            resultString += ch; // Append alphabetic characters to the result string
        }
    }

    // Display the result
    std::cout << "String after removing non-alphabetic characters: " << resultString << "\n";

    return 0;
}

