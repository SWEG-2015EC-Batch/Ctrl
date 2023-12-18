#include<iostream>
using namespace std;
int main (){
	  
	  char ch;
	  while (true){
      
	  cout<<"enter the character"<<endl;
	  cin>>ch;
	  if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z'))){
	  	if ((ch>='a')&&(ch<'z')){
	  		cout<<" its lower case alphabet \n";
	  }else{
	  	cout<<" its uper case alphabet \n ";
	  }
	  switch (ch){
	  
	   case 'a':
	   case 'e':
	   case 'i':
	   case 'o':
	   case 'u':
	   case 'A':
	   case 'E':
	   case 'I':
	   case 'O':
	   case 'U':
    	cout<<"   its vowel leter \n"<<endl;
    	break;
	default :
		cout<< "  its consonant leter\n ";
	}
	 
} else if((ch>='0')&&(ch<='9')){
        	cout<<"its a digt \n";
        	if (ch%2==0){
        		cout <<"  its even \n";
			}else  {
				cout<<"  its odd number \n ";
			}
		}
 else {
	cout<< "its a special character \n";
}
   cout<< "  enter '#' to stop or enter any key to continue "<< endl;
   cin>>ch;
   if (ch=='#'){
   	exit (0);
   }
}
     
	  
	return 0;
}
