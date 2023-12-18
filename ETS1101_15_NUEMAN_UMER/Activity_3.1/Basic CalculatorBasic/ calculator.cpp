#include <iostream>
using namespace std;

int main() {
int stop;
    do {

    float operation, num1, num2;
    char opr; //operators
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "\nEnter an operator(\"+, *, -, /\"):";
    cin >> opr;

    switch(opr) {
    case '+':
        operation = num1 + num2;
        cout << "\nThe sum of the number " << num1 << " and " << num2 << " is " << operation;
        break;
    case '-':
        operation = num1 - num2;
        cout << "The subtraction of the number " << num1 << " and " << num2 << " is " << operation;
        break;
    case '/':
        operation = num1 / num2;
        cout << "The division of the number " << num1 << " and " << num2 << " is " << operation;
        break;
    case '*':
        operation = num1 * num2;
        cout << "The multiplication of the number " << num1 << " and " << num2 << " is " << operation;
        break;
    default:
        cout << "You enter the wrong operand" << endl;
    }
    cout << "\n\nEnter 0 to stop or any number to continue: ";
    cin >> stop;
    cout << "\n\n";



    } while(stop != 0);
    return 0;
}

