#include <iostream>

using namespace  std;

int main()

{
	char ch;
    do{
cout << "Enter a character: ";
cin >> ch;

if (isupper(ch)) {
cout << "This is Uppercase letter" << endl;
} else if (islower(ch)) {
cout << "This is Lowercase letter" << endl;
} else if (isdigit(ch)) {
cout << "This is Digit" << endl;
int num = ch - '0';
if (num %2 ==0) {
cout << "This is Even number" << endl;
} else {
cout << "This is Odd number" << endl;
}
} else {
cout << "This is Special character" << endl;
}

if (isalpha(ch)) {
ch = tolower(ch);
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
cout << "Vowel" << endl;
} else {
cout << "Consonant" << endl;
}
}
 }while(ch!=0);
 
 return 0;
}











