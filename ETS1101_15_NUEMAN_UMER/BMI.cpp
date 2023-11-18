#include <iostream>

using namespace std;

int main() 
{
    // Input height and weight
    double height, weight;

    cout << "Enter height in meters: ";
    cin >> height;

    cout << "Enter weight in kilograms: ";
    cin >> weight;

    // Calculate BMI
    double bmi = weight / (height * height);

    // Display BMI
    cout << "\nBMI: " << bmi << endl;

    // Interpret BMI categories (optional)
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi < 24.9) {
        cout << "Normal weight" << endl;
    } else if (bmi < 29.9) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }

    return 0;
}