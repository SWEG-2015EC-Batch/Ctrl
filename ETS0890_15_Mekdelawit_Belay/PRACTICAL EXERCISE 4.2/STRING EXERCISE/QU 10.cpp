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
   cin>>inputPassword[10];
    // Check whether the input password is correct
    if (pass[10]==inputPassword[10]) {
        std::cout << "Password is correct. Access granted!\n";
    } else {
        std::cout << "Incorrect password. Access denied!\n";
        cout<<" Inter the correc password1!!!"<<endl;
    }
    return 0;
}
