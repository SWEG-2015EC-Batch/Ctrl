/*
This reads total mark of a students’ and print the score level with the mark in tabular
format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor and <40 Fail.
*/
#include <iostream>
using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    double marks[numStudents];
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the total marks for student " << i+1 << ": ";
        cin >> marks[i];
    }

    cout << "\nStudent Score Level\n";
    cout << "--------------------------------------\n";
    cout << "Student\t\tMarks\t\tLevel\n";
    cout << "--------------------------------------\n";
    for (int i = 0; i < numStudents; i++) {
        cout <<i+1<<"\t|\t"<< marks[i] << "\t|\t";
        if (marks[i] >= 80) {
            cout << "Excellent";
        } else if (marks[i] >= 60) {
            cout << "Very Good";
        } else if (marks[i] >= 50) {
            cout << "Fair";
        } else if (marks[i] >= 40) {
            cout << "Poor";
        } else {
            cout << "Fail";
        }
        cout << endl;
    }

    return 0;
}
