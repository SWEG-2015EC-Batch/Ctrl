//This program stores a list of number and print the even numbers in the array in reverse order they are entered.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"How many numbers would you like to enter :";
    cin>>n;
    int nums[n];
    for(int i=0; i<n;i++){
        cout<<"Num"<<i+1<<": ";
        cin>>nums[i];
    }

    cout<<"\nThe Even numbers in reverse order are : ";
    for(int i=n; i>0;i--){
        if(nums[i-1]%2==0){
            cout<<nums[i-1]<<", ";
        }
    }

return 0;
}
