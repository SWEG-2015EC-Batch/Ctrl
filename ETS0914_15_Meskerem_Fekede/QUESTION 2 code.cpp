#include <iostream>

using namespace std;

int main()
{
    const float gallonrate=25;
    float gallon=1,miles;
    cout << "  ENTER THE GALLON VALUE \n   " ;
    cin>>gallon;
    miles=gallonrate*gallon;
    cout<<"  THE MILES YOU CAN DRIVE BY THE GIVEN VALUE OF GALLON IS \n   =" <<miles;

    return 0;
}
