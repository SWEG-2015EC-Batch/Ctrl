/* This program checks whether two one dimensional arrays of the same size are
identical (have the same elements) or not. */
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the arrays: ";
    cin >> size;

    int Array1[size];
    int Array2[size];
    cout << "Enter elements for the Array1 :\n";
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> Array1[i];
    }

    cout << "Enter elements for the Array2 :\n";
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> Array2[i];
    }

    for (int i = 0; i < size; ++i) {
        if (Array1[i] != Array2[i]) {
         cout << "The arrays are not identical.\n";
            return 0;
        }
    }

    cout << "The arrays are identical.\n";

    return 0;
}

