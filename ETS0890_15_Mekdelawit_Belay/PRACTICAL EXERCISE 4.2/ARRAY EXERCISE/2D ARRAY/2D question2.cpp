#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

int main()
{
   //2. Write a C++ program to that accepts a two-dimensional array and displays the multiplication
  //of row elements and the sum of column elements.
         int n,m;
         cout<<" Enter number of row "<<endl;
         cin>>n;
         cout<<" Enter number of column "<<endl;
         cin>>m;
         int num[n][m],multiple=1,sum=0;
         for(int i=0;i<n;i++){
         	for(int j=0;j<m;j++){
         		cout<<" enter the row/column elements "<<j+1<<endl;
         		cin>>num[i][j];
			 }
			 cout<<endl;
		 }
         for(int i=0;i<n;i++){
         	for(int j=0;j<m;j++){
         		cout<<num[i][j]<<"  ";
			 }
			 cout<<endl;
		 }
		 cout<<endl;
		 
		 for(int i=0;i<n;i++){
         	for(int j=0;j<m;j++){
         	multiple*=num[i][j];
			 }
			cout<<" multiple of row "<<i+1<<" is "<<multiple<<endl;
		 }
		 cout<<endl;
		 for(int j=0;j<m;j++){
         	for(int i=0;i<n;i++){
         	sum+=num[i][j];	
			 }
			 cout<<" sum of column "<<j+1<<" is "<<sum<<endl;
		 }
		  cout<<endl;
    return 0;
}
