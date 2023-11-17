//program to calculate x the power of y
#include <iostream>

using namespace std;

int main()
{
    int x,y,i,product=1;
    cout<<"|h enter value of x and y:";
    cin>>x>>y;
    i=1;
    while(i<=y)
    {
        product=product*x;
        i=i+1;
    }
        cout<<"x the power of y is "<< product;

        return 0;

}
