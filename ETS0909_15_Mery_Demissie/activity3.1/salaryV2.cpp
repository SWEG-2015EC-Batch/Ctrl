#include <iostream>

using namespace std;

int main()
{
    float grosssalary, workinghour, taxrate, bonusrateperhour, overtime=0 ,netsalary, pension, tax;
    cout<<"enter gross salary \n";
    cin>>grosssalary;
    pension= grosssalary*0.07;

   cout<<" this is the pension \n"<<pension<<endl;


    cout<<"enter workinghour \n";
    cin>>workinghour;
    cout<<"enter bonusrateperhour \n";
    cin>>bonusrateperhour;

    if(workinghour>40){
   
        {cout<<"under_weight";}

   
    cin>>bonusrateperhour;
    overtime= bonusrateperhour*workinghour-bonusrateperhour*40;
        cout<<" this is the overtime\n"<<overtime<<endl;
 }
    if(grosssalary>=3500){
    	tax=grosssalary*0.3;
	}
	else if(grosssalary>=2000&&grosssalary<3500)
	    	{tax=grosssalary*0.25;
	}else if(grosssalary>=1200&&grosssalary<2000)
	    	{tax=grosssalary*0.2;
		}else if(grosssalary>=600&&grosssalary<1200)
	    	{tax=grosssalary*0.15;
	}else if(grosssalary>=200&&grosssalary<600)
	    	{tax=grosssalary*0.1;
	    }else 
	     {
	     	tax=0;
		}
		
    cout<<"this is the tax\n"<<tax;

	netsalary=grosssalary-pension-tax+overtime;
    cout<<" this is the net pay for the employee \n"<<netsalary<<endl;

    return 0;
}
