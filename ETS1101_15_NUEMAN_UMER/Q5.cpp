// a program that calculates a particular person payment
#include<iostream>
using namespace std;

int main(){
    string name;
    int hour;// weekly working hours 
    float bonus,// bonus rate per hour 
          base, // base salary
          gross_salary,
          net_salary,
          bonus_payment;  

    //inserting
    cout<<"What is your name? ->";
    cin>>name;
    cout<<"What is base salary? ->$";
    cin>>base;
    cout<<"What is your weekly working hours? ->";
    cin>>hour;
    cout<<"What is your bonus rate per hour? (0 - 1) ->";
    cin>>bonus;



    //gross salary opreation
    gross_salary = (bonus * hour) + base;

    //net salary opreation
    float tax = gross_salary * 0.15;
    float pesion_rate = gross_salary * 0.05;

    net_salary = (gross_salary) - (tax + pesion_rate);

    //bonus payment opreation
    bonus_payment = bonus * hour;


    //final output
    cout<<"Hey "<<name<<endl;
    cout<<"your gross salary is $"<<gross_salary<<endl;
    cout<<"your net salary is $"<<net_salary<<endl;
    cout<<"your bonus payment is $"<<bonus_payment<<endl;

    return 0;
}