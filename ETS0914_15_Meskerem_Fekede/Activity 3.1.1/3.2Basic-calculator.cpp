#include <iostream>

using namespace std;

int main()
{
    float num1,num2,result;
    char op,n;
    do{
    cout << "*********CALCULATOR************" << endl;
    cout << " ENTER -,+,*,/" << endl;
    cin>>op;
    cout << "enter num 1";
    cin>>num1;
    cout<<"enter num 2";
    cin>>num2;
    switch(op){
    case'+':
    result=num1+num2;
    cout<< " result \n"<<result;
    break;
    case '-':
    result=num1-num2;
    cout<<" result \n"<<result;
    break;
    case'*':
    result=num1*num2;
    cout<< " result \n"<<result;
    break;
    case'/':
    result=num1/num2;
    cout<< " result \n"<<result;
     break;
     default:
     	cout<<" incorect operator";
     	break;
    }
    cout<<endl;
    }while (num1 !=0);

    return 0;
}
