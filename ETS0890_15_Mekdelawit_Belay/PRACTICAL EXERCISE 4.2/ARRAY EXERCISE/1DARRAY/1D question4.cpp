#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

int main()
{
  //Write a program to input the following values in an array named volts: 11.95, 16.32, 12.15, 8.22, 15.98,
  //26.22, 13.54, 6.45, and 17.59. After the data has been entered, have your program display it three column
  //in table form:
	 
    double volts[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59}; // Declare and initialize array

    // Display the data in three columns in table form
    cout <<setw(10) << "Voltage" <<setw(10) << "Voltage" <<setw(10) << "Voltage" << "\n";
    
    for (int i = 0; i < 9; ++i) {
        cout <<fixed <<setprecision(2) <<setw(10) << volts[i];
        
        // Start a new line after every third element
        if ((i + 1) % 3 == 0) {
            std::cout << "\n";
        }
    }  
    return 0;
}
