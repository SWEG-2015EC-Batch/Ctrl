//program to calculate number of miles from gallon rate and gallon
#include <iostream>

using namespace std;

int main()
{
    const float gallonrate=25;
    float gallon=1, miles;
    cout <<"Enter the value of gallon" <<endl;
    cin>>gallon;
    miles=gallonrate*gallon;
    cout<<"the number of miles can be driven \n|" <<miles;

    return 0;
}
