//a c++ program that converts a letter to its uppercase or lowercase equivalent
#include<iostream>
#include <ctype.h>
using namespace std;

int main(){
    //declaring variables
    char letter;

    //input the letter
    cout<<"enter a random letter ->";
    cin>>letter;

    //check if it's lowercase
    if (islower(letter)) {
        // Convert to uppercase
        letter = toupper(letter);
        cout<<"Uppercase equivalent: "<<letter<<endl;
    } else if (isupper(letter)) {
        // Convert to lowercase
        letter = tolower(letter);
        cout<<"Lowercase equivalent: "<<letter<<endl;
    } else {
        cout<<"Invalid input. Please enter a valid letter "<<endl;
    }

    return 0;
}