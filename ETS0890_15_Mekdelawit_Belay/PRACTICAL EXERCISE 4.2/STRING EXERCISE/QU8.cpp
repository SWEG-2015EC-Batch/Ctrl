#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
  //8. Write an application that inputs a line of text and outputs the text twice, once in all uppercase
  //and once in all lowercase letters.
  string text;

  cout << "Enter a line of text: ";
  getline(cin, text);

  string uppercase = text;
  for (char& c : uppercase) {
    c = toupper(c);
  }

  string lowercase = text;
  for (char& c : lowercase) {
    c = tolower(c);
  }


  cout << "\nUppercase: " << uppercase << endl;
  cout << "Lowercase: " << lowercase << endl;

  return 0;
}
