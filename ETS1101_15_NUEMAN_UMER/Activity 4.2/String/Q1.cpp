/*this program  reads a string and count number of vowels and consonants alphabet
present in a string.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int vowels = 0, consonants = 0;

    cout << "Enter a word : ";
    getline(cin, word);

    for (char ch : word) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            switch (ch) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
                    break;
            }
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}

