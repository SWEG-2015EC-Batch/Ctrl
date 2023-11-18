#include <iostream>

using namespace std;

int main()

{

 cout <<"       THIS IS FOR CALCULATE YOUR BMI(BODY MASS INDEX) \n \n";

   float height_in_m , weight_in_kg , BMI;

    cout << "  #NOTE: Enter your height in m, weight in kg \n" << endl;
    cout<<" ENTER YOUR HEIGHT \n   ";
    cin>>height_in_m;
    cout<<" ENTER YOUR WEIGHT\n   ";
    cin>>weight_in_kg;
    BMI=weight_in_kg/(height_in_m*height_in_m);
    cout<<" YOUR BMI \n  ="<<   BMI<<endl;

    return 0;
}

