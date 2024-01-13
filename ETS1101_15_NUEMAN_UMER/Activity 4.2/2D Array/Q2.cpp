/* This program accepts a two-dimensional array and displays the multiplication
of row elements and the sum of column elements. */
#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int arr[rows][columns];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        cout<<"\nRow"<<i+1<<"\n";
        for (int j = 0; j < columns; j++) {
        cout<<"Column"<<j+1<<": ";
            cin >> arr[i][j];
        }
    }

    cout << "Multiplication of row elements:" << endl;
    for (int i = 0; i < rows; i++) {
        int rowProduct = 1;
        for (int j = 0; j < columns; j++) {
            rowProduct *= arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowProduct << endl;
    }

    cout << "Sum of column elements:" << endl;
    for (int j = 0; j < columns; j++) {
        int columnSum = 0;
        for (int i = 0; i < rows; i++) {
            columnSum += arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << columnSum << endl;
    }

    return 0;
