/*
This program read and adds equivalent elements of 3 by 4 two-dimensional arrays named first
and second. The program should print the resulting data elements in table form.
*/
#include <iostream>
using namespace std;

int main() {
    int first[3][4],second[3][4],result[3][4];

   cout << "Enter elements for the first array:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Enter element at position [" << i + 1 << "," << j + 1 << "]: ";
            cin >> first[i][j];
        }
    }

    cout << "Enter elements for the second array:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Enter element at position [" << i + 1 << "," << j + 1 << "]: ";
            cin >> second[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }

    cout << "Resulting table:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
