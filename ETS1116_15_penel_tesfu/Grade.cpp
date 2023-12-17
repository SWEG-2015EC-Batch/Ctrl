#include<iostream>
using namespace std;
int main()  {
	unsigned int mark,test,quiz,project,assignment,final;
    cout<< "  Enter your TEST RESULT out 15 \n";
   cin>>test;
   cout<< "  Enter your QUIZ RESULT out of 5 \n";
   cin>>quiz;
   cout<< "  Enter your PROJECT RESULT out of 20 \n";
   cin>>project;
   cout<< "  Enter your ASSIGNMENT RESULT out of 10 \n";
   cin>>assignment;
   cout<< "  Enter your FINAL RESULT out of 50 \n";
   cin>>final;
   
   mark=final+project+assignment+quiz+test;
    cout<< " YOUR TOTAL RESULT out of 100 : "<<mark<<endl;
    
     if (mark>=90){
     	cout<< " GRADE: A+ ";
	 }else if ((mark>=80)&&(mark<=89)){
	 	cout<< " GRADE: A ";
	 } else if ((mark>=75)&&(mark<=79)){
	 	cout<< " GRADE: B+ ";
	 } else if ((mark>=60)&&(mark<=74)){
	  cout<< " GRADE: B ";
     }else if ((mark>=55)&&(mark<=59)){
     	cout<< " GRADE: C+ ";
	 }else if ((mark>=45)&&(mark<=54)){
	 	cout<<" GRADE: C ";
	 } else if((mark>=31)&&(mark<=44)){ 
	 	cout <<" GRADE: D ";
	 } else if (mark<=30){
	 	cout<<" GRADE: F ";
	 	}else {
	 		cout<<" invalid mark";
		 }
	  

return 0;
}
