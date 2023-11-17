//program to calculate BMI
#include <iostream>

using namespace std;

int main()

{
     cout <<"to calculate your BMI \n \n";

    float height_in_m , weight_in_kg , BMI;

    cout <<"enter your height in m, weight in kg " << endl;
    cin>>height_in_m>>weight_in_kg;
    BMI=weight_in_kg/(height_in_m*height_in_m);
    cout<<"your BMI IS="<<BMI;

    return 0;

}
