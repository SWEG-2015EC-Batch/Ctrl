#include <iostream>
#include <string>
using namespace std;

int main()

{
	int n;
	string gender;
	cout<< " Enter number of the person \n";
	cin>>n;
	for(int i=0;i<n; ++i){
	
 cout <<"       THIS IS FOR CALCULATE YOUR BMI(BODY MASS INDEX) \n \n";
 cout<<"  ENTER YOUR GENDER \n";
   cin>> gender;
 if(gender=="f"||gender=="m"){
 	cout<<  "   valid \n \n";
 }else{
 	cout<<"  invalid input \n ";
 	exit(0);
 }

   float height_in_m , weight_in_kg , BMI;

    cout << "  #NOTE: Enter your height in m, weight in kg \n" << endl;
    cout<<" ENTER YOUR HEIGHT \n   ";
    cin>>height_in_m;
    cout<<" ENTER YOUR WEIGHT\n   ";
    cin>>weight_in_kg;
    BMI=weight_in_kg/(height_in_m*height_in_m);
    cout<<" YOUR BMI \n  ="<<   BMI<<endl;
    if(BMI>=30){
    	cout<<"  obsity \n";
	}
    
       if (gender=="f"&&BMI<18.5){
       cout<<"  under weight \n";
	   }
       else if(gender=="f"&&18.5<=BMI&&BMI<=24.9){
       	cout<<"  normal weight \n";
	   }
	   else if(gender=="f"&&25<=BMI&&BMI<=29.9){
	   	cout<<"  over weight \n ";
	   }
	   
	   if(gender=="m"&&BMI<20.5){
	   	cout<<  " under weight \n ";
	   	}else if(gender=="m"&&BMI>=20.5&&BMI<=25.9){
	   		cout<<  " normal weight \n ";
	   		}else if (gender=="m"&&BMI>=26&&BMI<=29.9){
	   			cout<<  "over weight \n ";
			   }
		   
	   	
	   
}
    return 0;
}
