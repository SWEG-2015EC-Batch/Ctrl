//program to calculate BMI
#include <iostream>
#include <string>
using namespace std;

int main()

{
   int n;
   cout<<"enter the number of times you want to repeat";
   cin>>n;
string Gender ;
   for(int i=0; i<n; ++i){
   
    float height_in_m , weight_in_kg , BMI;
   

    
    cout<< "enter your Gender F or M";
     cin>> Gender ;
     if(Gender=="F"||Gender=="M"){
        cout<<"valid";
        }
        else {
            cout<<"invalid";
            exit(0);
        }

     cout <<" to calculate your BMI \n \n";

   

    cout <<"enter your height in m, weight in kg " << endl;
    cin>>height_in_m>>weight_in_kg;
    BMI=weight_in_kg/(height_in_m*height_in_m);
    cout<<"your BMI IS="<<BMI;


    if (Gender=="F"&& BMI<18.5)
        {cout<<"under_weight";}

    else if (Gender=="F"&& 18.5<=BMI&&BMI<=24.9)
        {cout<<"normal_weight";}
    else if (Gender=="F"&& 25<=BMI<=29.9)
        {cout<<"over_weight";}

    if(Gender=="M"&& BMI<20.5)
        {cout<<"under_weight";}
    else if (Gender=="M"&& 20.5<=BMI&&BMI<=25.9)
        {cout<<"normal_weight";}
    else if (Gender=="M"&& 26<=BMI&&BMI<=29.9)
        {cout<<"over_weight";}
    else if (BMI>=30)
        {cout<<"obesity";}
}
    return 0;

}
