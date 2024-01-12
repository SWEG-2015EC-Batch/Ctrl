#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

int main()
{
   	// Design a program that read total mark of a students’ and print the score level with the mark in tabular
    // format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor and <40 Fail.

	 int n;
	 cout<<" HOW MANY STUDENTS YOU WANT TO ENTER?"<<endl;
	 cin>>n;
	 double totalmark[n];
	 for(int i=0;i<n;i++){
	 	cout <<" Enter the marks of student "<<i+1<<endl;
	 	cin>>totalmark[i];
	 }
	 for(int i=0;i<n;i++){
	 	 if (totalmark[i] >= 80.0) {
        cout <<" student " <<i+1<<" Excellent\n";
    } else if (totalmark[i] >= 60.0&&totalmark[i] <80.0) {
        cout<<" student " <<i+1 << " Very Good\n";
    } else if (totalmark[i] < 60.0&&totalmark[i] >= 50.0) {
        cout <<" student " <<i+1<< " Fair\n";
    } else if (totalmark[i] >= 40.0&&totalmark[i] < 50.0) {
        cout <<" student " <<i+1<< " Poor\n";
    } else {
        std::cout<<" student " <<i+1 << " Fail\n";
    }
	 	
		 }
    return 0;
}
