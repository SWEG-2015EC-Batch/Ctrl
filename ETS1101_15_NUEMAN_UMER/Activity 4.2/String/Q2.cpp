//This program  checks weather the word is palindrome or not.
#include <iostream>
#include <string>
using namespace std ;
int main() {
    string word;
    cout << "Enter a word : ";
     getline(cin,word);
    int i = 0;
    int j = word.length() - 1;
    while (i < j) {
        if (word[i] != word[j]) {
            cout << "\"" << word << "\" is not a palindrome." << endl;
            return 0;
        }
        i++;
        j--;
    }
    cout << "\"" << word << "\" is a palindrome." <<endl;
    return 0;
}
