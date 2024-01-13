/*
This program to input the following values in an array named volts: 11.95, 16.32, 12.15, 8.22, 15.98,
26.22, 13.54, 6.45, and 17.59.And display it in three column in table form:
*/
#include <iostream>
using namespace std;
int main() {
    double volts[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    cout << "Voltage Values" << endl;
   cout << "-----------------------------------------" << endl;
    for (int i = 0; i < 9; i++) {
        cout << volts[i] << "\t|\t";
        if ((i + 1) % 3 == 0) {
           cout << endl;
        }
    }
    cout <<endl;

    return 0;
}
