#include <iostream>
using namespace std;

int main()
{

   	float number1, number2, result;
    char op, n;
    do{
    cout<< "CALCULATOR"<<endl;
    cout<< "enter anykey"<<endl;
     cin>> n;

     if(n=='0'){
        cout<<"invalid";
        exit(0);
        }
        else {
            cout<<"continued";

        }
    cout<<" Enter +, -, *, /" <<endl;
    cin>>op;
    cout<< "Enter number1"<<endl;
    cin>>number1;
    cout<<"Enter number2"<<endl;
    cin>>number2;

    switch(op){
   case'+':
    result=number1+ number2;
    cout<<"result is"<<result<<endl;
    break;

   case'-':
    result=number1-number2;
    cout<<"result is"<<result<<endl;
    break;

   case'*':
    result=number1*number2;
    cout<<"result is"<<result<<endl;
    break;

   case'/':
    result=number1/number2;
    cout<<"result is"<<result<<endl;
    break;
    }

   }while(number1!=0);


return 0;
}
