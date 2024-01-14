//5. Write a program that find the frequency of vowel, consonant, digit and special character
   #include <iostream>
#include <cctype> // For using isalpha, isdigit functions

int main() {
    std::string inputString;
    int vowelsCount = 0, consonantsCount = 0, digitsCount = 0, specialCharsCount = 0;

    // Input a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Count the frequency of vowels, consonants, digits, and special characters
    for (char ch : inputString) {
        if (std::isalpha(ch)) {
            char lowercaseCh = std::tolower(ch);
            if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
                ++vowelsCount;
            } else {
                ++consonantsCount;
            }
        } else if (std::isdigit(ch)) {
            ++digitsCount;
        } else if (std::ispunct(ch) || std::isspace(ch)) {
            ++specialCharsCount;
        }
    }

    // Display the results
    std::cout << "\nFrequency of characters in the string:\n";
    std::cout << "Vowels: " << vowelsCount << "\n";
    std::cout << "Consonants: " << consonantsCount << "\n";
    std::cout << "Digits: " << digitsCount << "\n";
    std::cout << "Special characters and spaces: " << specialCharsCount << "\n";

    return 0;
}
       
