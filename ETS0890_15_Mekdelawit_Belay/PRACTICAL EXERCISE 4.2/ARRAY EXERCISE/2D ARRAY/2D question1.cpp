#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

int main()
{
   //1,Write a program that checks whether two one dimensional arrays of the same size are
   //identical (have the same elements) or not.

       int n;
     cout<<" enter the number of the lists"<<endl;
     cin>>n;
     int array1[n],array2[n];
     for(int i=0;i<n;i++){
     	cout<<" Enter the number for array 1 -"<<i+1<<endl;
     	cin>>array1[i];
     	cout<<" Enter the number for array 2 -"<<i+1<<endl;
     	cin>>array2[i];
	 }
	 	if(array1[n]=array2[n]){
	 		cout<<"  the 2 arrays are idential"<<endl;
		 }else{
		 	cout<<"  the 2 arrays are not idential"<<endl;
		 }


    return 0;
}
