//This program executes basic arithmetic operations.
#include <iostream>
using namespace std;
int main() {
    cout <<"_____________ CALCULATOR _________________\n" << endl;
    int num_1, num_2, result, num_3 {0};
    char operate;//operator variable
    do {
        cout <<"Please enter the first number: ";
        cin >> num_1;
        cout <<"Please enter the second number: ";
        cin >> num_2;
        loop:
        cout <<"Enter the type of operation you want, (+ , - , * , / ) or (%) if you want to calculate remainder: ";
        cin >> operate;
        switch (operate) {
            case '+': result = num_1 + num_2;
            cout << "\nThe sum of the number " << num_1 << " and " << num_2 << " is " << result;
                break;
            case '-': result = num_1 - num_2;
            cout << "\nThe subtraction  of the number " << num_1 << " and " << num_2 << " is " << result;
                break;
            case '*': result = num_1 * num_2;
            cout << "\nThe multiplication of the number " << num_1 << " and " << num_2 << " is " << result;
                break;
            case '/': result = num_1 / num_2;
                cout << "\nThe division  of the number " << num_1 << " by " << num_2 << " is " << result;
                break;
            case '%':  result = num_1 % num_2;
                cout << "\nThe remainder of the number " << num_1 << " divided by  " << num_2 << " is " << result;
                break;
            default: cout << "unknown operator: " << operate << '\n';
                goto loop;
        }
        cout <<"\nPlease enter 0 to quit or any other number to continue: ";
        cin >> num_3;
    }while (num_3 != 0);
    return 0;
}
