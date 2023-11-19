//a c++ program that calculates the miles an automobile can be driven
#include<iostream>
using namespace std;
int main(){

    int capacity; //the capaity of the car gas tank
    float miles, //the miles per gallons the automobile can be driven
          amount; //the amount of miles the automobile can be driven

    //input the required materials
    cout<<"please enter the required things about the automobile"<<endl;
    cout<<"the capacity of the car gas tank(in gallons)=>";
    cin>>capacity;
    cout<<"the miles per gallons the automobile can be driven(in  mile)=>";
    cin>>miles;

    //opreate the amount
    amount = capacity * miles;

    //display amount
    cout<<"the amount of miles the automobile can be driven is '"<<amount<<" mile(s)' ";

    return 0;
}