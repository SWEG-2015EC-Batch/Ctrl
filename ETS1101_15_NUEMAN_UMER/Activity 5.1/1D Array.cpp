#include <iostream>

using namespace std;

int main() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    int arr[3][4] = { { 10, 11, 12, 13 }, { 20, 21, 22, 23 }, { 30, 31, 32, 33 }};

    cout << "Address of balance : "<<endl;
    for (int i = 0; i < 5; ++i) {
    cout << "balance[" << i<<"] is "  << &balance[i] << "\n";
    }

    cout << "\nAdress of arr : "<<endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "arr["<< i <<"]["<< j <<"] is " <<&arr[i][j] << "\n";
        }
    }

    cout << "\nElements of balance "<<endl;
    double *balancePtr = balance;
    for (int i = 0; i < 5; ++i) {
    cout << "balance["<< i <<  "] is " << *(balancePtr + i) << "\n";
    }

    cout << "\nElements of arr "<<endl;
    int *arrPtr = &arr[0][0];
     for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "arr[" << i<<"]["<< j <<"] is "<< *(arrPtr + i * 4 + j) << "\n";
        }
    }

    return 0;
}
