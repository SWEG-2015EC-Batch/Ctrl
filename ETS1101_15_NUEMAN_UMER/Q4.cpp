//a program that find the result of the expression 𝑥^𝑦 
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int base,power,answer;

    //read base and power
    cout<<"Enter the base and the power respectively"<<endl;
    cout<<"base ->";
    cin>>base;
    cout<<"power ->";
    cin>>power;

    //opreation
    answer = pow(base,power);

    //display answer
    cout<<"the answer is "<<answer;
    return 0;
}