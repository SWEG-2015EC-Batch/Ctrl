/*This program store and print the names of your two favorite television programs and Initialize one of the strings (assign it the first program’s name) at the time you declare the array.
and Initialize the second value in the body of the program with the strcpy() function.*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char favPrograms[5][100] = {"Friends"};

    strcpy(favPrograms[1], "The Recruit");

    cout << "My favorite programs are:\n";
    cout << "1. " << favPrograms[0] << '\n';
    cout << "2. " << favPrograms[1] << '\n';

    return 0;
}
