#include <iostream>5
#include<string>

using namespace std;

int main()

{
    const float pension_rate=0.05, tax_rate=0.15 ;
    int  weekly_working_hour;
    string  employee_name;
    float base_salary,gross_salary, bouns_rate_per_hour, overtime=0, net_salary, bonus;

    cout << " ENTER YOUR FULL NAME, YOUR WORKING HOUR AND YOUR GROSS SALARY \n";

    cout << "   ENTER YOUR FULL NAME \n   " ;
    cin >>  employee_name;
    cout << "   ENTER YOUR WEEKLY WORKING HOUR \n    " ;
     cin>> weekly_working_hour;
    cout << "   ENTER YOUR GROSS SALARY \n     " ;
    cin>> gross_salary;

    float tax=gross_salary*tax_rate;
    float pension=gross_salary*pension_rate;

    base_salary=gross_salary-tax-pension;
    cout<<"    THIS IS YOUR BASE SALARY............ \n  ="<<base_salary <<endl;
     
     cout<<"   ENTER YOUR BONUS PER HOUR RATE \n   ";
     

    if(weekly_working_hour>56){
        cin>>bouns_rate_per_hour;
        overtime=bouns_rate_per_hour*(weekly_working_hour-56);
    }
    
    net_salary= gross_salary-tax-pension+overtime;
    cout<<"   THIS IS YOUR NET SALARY.............. \n  ="<<  net_salary <<endl;
 
    bonus=overtime;
    cout<<"   THIS IS YOUR BOUNCE..................\n  =" << bonus;


    return 0;
}
