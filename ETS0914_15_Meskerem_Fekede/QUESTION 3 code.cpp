#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "  ENTER THE LETTER:\n   "  ;
    cin>>ch;
    if((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z')){
        if(ch>='A'&&ch<='Z')
            ch=ch+32;
        else if (ch>='a'&&ch<='z')
            ch=ch-32;
        else
            ;
        cout<<"  Converted LETTER is:"<<ch<<endl;
    }
    else{
            cout<<"Entered character is not a valid letter"<<endl;

    }
    return 0;
}
