#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    //6. Design a program to find the frequency of characters within string and display character with
   //largest and smallest frequency respectively.
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  unordered_map<char, int> char_counts;
  for (char c : str) {
    char_counts[c]++;
  }

  char max_char = ' ', min_char = ' ';
  int max_count = 0, min_count = INT_MAX;

  for (const auto& pair : char_counts) {
    if (pair.first != ' ' && pair.second > max_count) {
      max_char = pair.first;
      max_count = pair.second;
    }

    if (pair.first != ' ' && pair.second < min_count) {
      min_char = pair.first;
      min_count = pair.second;
    }
  }

  cout << "Maximum frequency character is " << max_char << " with " << max_count <<" count "<<endl;
  cout << "Minimum frequency character is " << min_char << " with " << min_count <<" count "<<endl;

  return 0;
}


