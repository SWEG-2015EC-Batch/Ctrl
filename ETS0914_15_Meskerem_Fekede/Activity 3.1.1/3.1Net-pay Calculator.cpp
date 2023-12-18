#include <iostream>
using namespace std;

int main() {
	float grosssalary,workinghour,taxrate,bonusrateperhour,overtime,netsalary,pension,tax;
	cout<<"enter gross salary \n";
	cin>>grosssalary;
	cout<<" enter working hour \n";
	cin>>workinghour;
		//cout<<" enter tax rate \n ";
	    //cin>>taxrate;
	cout<<"enter bonus rate per hour \n";
	cin>>bonusrateperhour;
	 if(grosssalary<=200){
		taxrate=0;
	}else if (grosssalary>200&&grosssalary<=600){
	 taxrate=0.1;
    }else if (grosssalary>600&&grosssalary<=1200){
      taxrate=0.15;
	}else if (grosssalary>1200&&grosssalary<=2000){
	  taxrate=0.2;
	}else if (grosssalary>2000&&grosssalary<=3500){
		taxrate=0.25;
	}else{
		taxrate=0.3;
	}
      tax=grosssalary*taxrate;
	  pension=grosssalary*(7/100);
	  cout<< "this is your tax \n"<<tax<<endl;
	  
	if(workinghour>40){
		overtime=bonusrateperhour*(workinghour-40);
	}
	cout<<"this is your bonus \n "<<overtime<<endl;
	
	netsalary=grosssalary-pension-tax+overtime;
	cout<<"this is your net payment \n "<<netsalary<<endl;
	
	return 0;
}
