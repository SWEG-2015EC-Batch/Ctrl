//program to change uppercase to lowercase and viceversa
#include <iostream>

using namespace  std;

int main()

{
    char ch;
    cout<<"enter alphabet";
    cin>>ch;
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
   {
       if(ch>='A'&&ch<='Z')
       ch=ch+32;
       else if(ch>='a'&&ch<='z')
        ch=ch-32;
       cout<<"the converted character is:"<<ch;

   }
   else
    {
        cout<<"enter character is not valid";
    }
    return 0;
}
