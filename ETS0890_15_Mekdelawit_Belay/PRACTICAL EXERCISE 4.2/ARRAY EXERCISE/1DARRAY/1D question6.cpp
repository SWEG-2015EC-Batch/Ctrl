#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

int main()
{
  // Write a program that store a list of number and print the even numbers in the array in reverse order they are entered.
    int n;
    cout<<" Enter the number of the list number"<<endl;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
    	cout<<" ENTER THE NUMBERS"<<endl;
    	cin>>num[i];
	}
	 cout<<" EVEN NUMBERS IN THE GIVEN LIST OF NUMBERS ARE: "<<endl;
	for(int i=0;i<n;i++){
	if(num[i]%2==0){
		cout<<num[i]<<endl;
	}
    }
	 std::cout << "\nEven numbers in reverse order:\n";
    for (int i = num.size() - 1; i >= 0; --i) {
        if (numbers[i] % 2 == 0) {
            std::cout << num[i] << " ";
        }
    }

    std::cout << "\n";
    return 0;
}
