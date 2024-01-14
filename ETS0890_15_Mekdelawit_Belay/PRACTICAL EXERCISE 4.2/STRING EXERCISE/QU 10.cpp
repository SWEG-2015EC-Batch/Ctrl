#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;

int main()
{
  //10. Write a program that stores a password in a character array called pass. The program then
//ask users for the password and check whether they typed the proper password or not.

    char pass[10] = "qwertyuio"; // Change this to your desired password
    char inputPassword[10];

    // Ask users for the password
   cout << "Enter the password: ";
   cin>>inputPassword;
    // Check whether the input password is correct
    if (strcmp(pass, inputPassword) == 0) {
        std::cout << "Password is correct. Access granted!\n";
    } else {
        std::cout << "Incorrect password. Access denied!\n";
        cout<<" Enter the correct password!!!"<<endl;
    }
    return 0;
}
