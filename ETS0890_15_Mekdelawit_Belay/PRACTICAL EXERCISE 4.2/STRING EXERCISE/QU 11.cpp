#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;

int main()
{
  
//11. Write a program that asks the user for its first, middle and last name and then prints the
//user’s initials on-screen by printing the first character of each name. 
	    string firstName, middleName, lastName;
    // Ask the user for their first, middle, and last name
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your middle name: ";
    cin >> middleName;

    cout << "Enter your last name: ";
    cin >> lastName;

    // Print the user's initials
    cout << "\nYour initials are: " << firstName[0] << middleName[0] << lastName[0] << "\n";

    return 0;
}
