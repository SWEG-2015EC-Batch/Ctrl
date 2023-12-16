#include <iostream>
using namespace std;
int main()
{
	float test, quiz, project, assignment, final,total;
	cout << "Enter the test 15%";
	cin >> test;
	if (test <= 15) {
		cout << "Enter the quiz 5%";
		cin >> quiz;
		if (quiz <= 5) {
			cout << "Enter the project 20% ";
			cin >> project;		 
			if (project <= 20) {
				cout << "Enter the assignment 10% ";
				cin >> assignment;		
				if (assignment <= 10) {
					cout << "Enter the final 50% ";
					cin >> final;				
					if (final<= 50) {			
					}
					else {
						cout << "invalid";
					     exit(0);
					}
					

				}
				else {
					cout << "invalid";
				     exit(0);
				}
			}
			else {
				cout << "invalid";
			     exit(0);
			}
		}
		else {
			cout << "invalid";
		      exit(0);
		}
	}
	else {
		cout << "invalid";
	     exit(0); 
	}
	total= test + quiz + project + assignment + final;
	 if (total <= 100 && total>= 90)
		cout << "A+";
	else if (total< 90 && total>= 80)
		cout << "A";
	else if (total< 80 && total>= 70)
		cout << "B+";
	else if (total< 70 && total>= 60)
		cout << "B";
	else if (total< 60 && total>= 55)
		cout << "C+";
	else if (total < 55 && total>= 45)
		cout << "C";
	else if (total< 45 && total>= 30)
		cout << "D";
	else
		cout << "F";
	return 0;
}

