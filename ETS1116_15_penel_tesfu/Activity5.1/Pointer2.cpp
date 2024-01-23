#include <iostream>
#include <cstring>
#include <limits>
using namespace std;


const int N = 3;

struct Person {
    char fullName[50];
    double height;
    double weight;
    double bmi;
};

int main() {
    Person people[N];


    for (int i = 0; i < N; ++i) {
        cout << "Enter full name for person " << i + 1 << ": ";
        cin.getline(people[i].fullName, 50);

        cout << "Enter height (in meters) for person " << i + 1 << ": ";
        cin >> people[i].height;

        cout << "Enter weight (in kilograms) for person " << i + 1 << ": ";
        cin >> people[i].weight;


        double *heightPtr = &people[i].height;
        double *weightPtr = &people[i].weight;
        double *bmiPtr = &people[i].bmi;

        *bmiPtr = *weightPtr / (*heightPtr * *heightPtr);

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }


    cout << "\n Person    "<<"Full Name    "<<"Weight   "<<"BMI  "<<endl;
    for (int i = 0; i < N; ++i) {
        cout << i + 1 << "    " << people[i].fullName << "         "
                  << people[i].height << "      " << people[i].weight << "      " << people[i].bmi << "\n";
    }

    return 0;
}
