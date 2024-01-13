/* 
This program reads eight integer numbers into an array named temp. As each number is input, add
the number into a total. After all numbers are input, display the number and their average.
*/
#include <iostream>
using namespace std;
int main() {
    int temp[8],total=0;

    for (int i=0;i<8;i++){
        cout <<"Enter number "<<i+1<<": ";
        cin>>temp[i];
        total +=temp[i];
    }
    double average= double(total)/8;
     cout<<"\nThe numbers you have enterd are: ";
   for(int i=0;i<8;i++){
    cout<<temp[i]<<", ";
}
cout<<"\nYour average is "<<average;

        return 0;
}
