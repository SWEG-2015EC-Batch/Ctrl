#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;

int main()
{
//9. Write a program to store and print the names of your two favorite television programs.
//Initialize one of the strings (assign it the first program’s name) at the time you declare the
//array. Initialize the second value in the body of the program with the strcpy() function.
    
	    const int MAX_LENGTH = 50; // Maximum length for program names

    // Initialize the first program's name at the time of declaration
    char program1[MAX_LENGTH] = "AMERICAN GOT TALENT";

    // Initialize the second program's name using the strcpy function
    char program2[MAX_LENGTH];
    strcpy(program2, "LITTLE BIG SHOT");

    // Print the names of the two favorite television programs
    std::cout << "My two favorite television programs are:\n";
    std::cout << "1. " << program1 << "\n";
    std::cout << "2. " << program2 << "\n";  

    return 0;
}

