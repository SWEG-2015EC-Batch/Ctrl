#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

int main()
{
   int num[8] ,average,total=0;
	cout<<" ENTER 8 INTEGERS"<<endl;
	for(int i=0; i<8; i++){
	   cout<<" ENTER THE NUMBERS"<<endl;
	   cin>>num[i];	
        total+=num[i];
	   
	}
	 cout<<"  The total sum....."<<total<<endl; 
       average=total/8;
      cout<<"  The Avarage....."<<average<<endl;
    return 0;
}
