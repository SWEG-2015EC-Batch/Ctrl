#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

int main()
{
   //3. Write a program to store exam scores (test, assignment, quiz, project and final). The
//program should determine and print the score level alongside with the total mark in tabular
//format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poorand <40 Fail.
         int n;
	 cout<<" HOW MANY STUDENTS YOU WANT TO ENTER?"<<endl;
	 cin>>n;
	 double test[n],assignment[n],quiz[n],project[n],final[n], totalmark[n];
	 for(int i=0;i<n;i++){
	 	cout <<" Enter the test result out of 25 for student  "<<i+1<<endl;
	 	cin>>test[i];
	 	cout <<" Enter the quiz result out of 5 for student "<<i+1<<endl;
	 	cin>>quiz[i];
	 	cout <<" Enter the project result out of 10 for student "<<i+1<<endl;
	 	cin>>project[i];
	 	cout <<" Enter the assignment result out of 10 for student "<<i+1<<endl;
	 	cin>>assignment[i];
	 	cout <<" Enter the final exam result out of 50 for student "<<i+1<<endl;
	 	cin>>final[i];
	 }
	 for(int i=0; i<n;i++){
	 	totalmark[i]=test[i]+assignment[i]+quiz[i]+project[i]+final[i];
	 }
	 cout  << "           TEST"  << "  ASSIGNMENT " << " QUIZ " << " PROJECT "<<" FINALEXAM "<<" TOTALRESULT "<<endl;
	 cout<<"------------------------------------------------------------------------------------"<<endl;
	 for(int i=0;i<n;i++){
	 	 if (totalmark[i] >= 80.0) {
        cout <<" student-" <<i+1<<"  "<<test[i]<<"       "<<assignment[i]<<"         "<<quiz[i]<<"      "<<project[i]<<"         "<<final[i]<<"         "<<totalmark[i]<<"         Excellent\n";
    } else if (totalmark[i] >= 60.0&&totalmark[i] <80.0) {
        cout<<" student-" <<i+1 <<"  "<<test[i]<<"       "<<assignment[i]<<"         "<<quiz[i]<<"      "<<project[i]<<"         "<<final[i]<<"         "<<totalmark[i]<< "         Very Good\n";
    } else if (totalmark[i] < 60.0&&totalmark[i] >= 50.0) {
        cout <<" student-" <<i+1 <<"  "<<test[i]<<"       "<<assignment[i]<<"         "<<quiz[i]<<"      "<<project[i]<<"         "<<final[i]<<"         "<<totalmark[i]<< "         Fair\n";
    } else if (totalmark[i] >= 40.0&&totalmark[i] < 50.0) {
        cout <<" student-" <<i+1 <<"  "<<test[i]<<"       "<<assignment[i]<<"         "<<quiz[i]<<"      "<<project[i]<<"         "<<final[i]<<"         "<<totalmark[i]<< "         Poorand\n";
    } else {
        std::cout<<" student-" <<i+1 <<" "<<test[i]<<"       "<<assignment[i]<<"         "<<quiz[i]<<"      "<<project[i]<<"         "<<final[i]<<"         "<<totalmark[i]<< "        Fail\n";
    }
	 	
		 }
	
    return 0;
}
