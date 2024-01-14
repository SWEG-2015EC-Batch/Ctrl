#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;

int main()
{
  //1. Write a program that read a string and count number of vowels and consonants alphabetpresent in a string.

     char str[50];
    cout << "Enter a string: "<<endl;
    gets(str);
    int vowelCount = 0;
    int consonantCount = 0;

    for (int i = 0; str[i]!='\0'; ++i) {
            // Check if the character is a vowel
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                ++vowelCount;
            } else {
                ++consonantCount;
            }
        }

    // Output the results
    cout << "\nNumber of vowels: " << vowelCount << "\n";
    cout << "Number of consonants: " << consonantCount << "\n";
 

    return 0;
}
