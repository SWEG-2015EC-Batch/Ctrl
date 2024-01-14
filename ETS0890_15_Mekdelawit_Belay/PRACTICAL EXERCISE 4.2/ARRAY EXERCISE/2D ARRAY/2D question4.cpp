#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <cstring>
using namespace std;

int main()
{
  //4. Write C++ program, to read 3*4 2D-array, find and print the sum of even array elements. The
//program should also print even array elements and ‘*’ instead of odd numbers in tabular form
	
  int num[3][4];
    int even = 0;
    cout << "Enter 12 numbers"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> num[i][j];
        }
    }
    cout << "Here is your result (the odd numbers are replaced by *)"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (num/**<  */[i][j] % 2 == 0) {
                cout << num[i][j] << "  ";
                even += num[i][j];
            } else {
                cout << "*  ";
            }
        }
        cout << endl;
    }
    cout<<endl;

    cout << "Sum of even elements: " <<even << endl;

    
    return 0;
}
