#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	//Write a C++ program that read and adds equivalent elements of the two-dimensional arrays named first
      //and second. The program should print the resulting data elements in table form.
   int n;
	cout<<"  Enter how many first/second number you want to enter "<<endl;
	cin>>n;
     int first[n], second[n],sum[n];
	for (int i=0;i<n;i++){
		cout<<" Enter the first numbers "<<endl;
		cin>>first[i];
		cout<<" Enter second numbers "<<endl;
		cin>>second[i];
	}

	for (int i=0;i<n;i++){
		cout<<"  "<<first[i];
    }
      cout<<endl;
	for (int i=0;i<n;i++){
		cout<<"  "<<second[i];
	}
      cout<<endl;
	for(int i=0;i<n;i++){
		sum[i]=second[i]+first[i];
		cout<<sum[i]<<"  ";
	}
            cout<<endl;
    return 0;
}
