#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int choice, n;

    while(true){


   cout<<" enter number of column:"<< endl;
   cin>>n;
   cout <<" enter your choice <1-14>"<<endl;
   cin>>choice;

   switch(choice){

   case 1:
   cout<<" right angle triangle::"<<endl;
     for(int i=1; i<=n; i++ ){
        for ( int j=1; j<=i; ++j){
            cout<< " *";
        }
       cout<< "\n";
     }
     break;
     case 2:
     cout<<" rectangle...:"<<endl;

     for(int i=1; i<=n; i++){
        for(int j=1;j<=n;++j){
            cout<<" *";
        }
        cout<<" \n";
     }
     break;
       case 3:
     cout<<" other triangle....\n"<<endl;
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if ( j>=((n+1)-i)){
                cout<<" *";
            }else{
            cout<<" ";
            }
        }
        cout<<endl;
     }
     break;
       case 4:
        cout<<" reverse right angle triangle:\n"<<endl;
        for(int i=n; i>=1; i--){
            for(int j=i; j>=1; j--){
                cout<<" *";
            }
            cout<<endl;
        }
     break;
       case 5:
        cout<<" hollow half piramid"<<endl;
          for (int i=1;i<=n;i++){
            for(int j=1; j<=n;j++){
                if( i==n|| j ==1||i==j){
                    cout<<"*";
                }
                else {
                    cout<<" ";
                }
            }
            cout<<endl;
          }
        break;
        case 6:
        	cout<< " inverted full piramid"<<endl;
        	for (int i = n; i >= 1; --i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
        break;
         case 7:
         	for(int i=1; n>=i;i++){
         		cout<< " a b c d e \n";
			 }
			 break;
			 case 8:
			     cout<< " hollow rectangle";
			 	for(int i=1;i<=n;i++){
                    for (int j=1;j<=n;++j){
                        if(i==1||i==n||j==1||j==n){
                            cout<<" *";
                        }else{
                        cout<<"  ";
                        }
                    }
                    cout<<endl;
			 	}
			 break;
             case 9:
                 cout<<" hollow full piramid:"<<endl;
                 for (int i=1; i<=n;i++){
                    for (int j=1; j<=n; j++){
                       if(i+j==n+1||j==n+i-1||i==n){
                        cout<<" *";
                       }else{
                       cout<<" ";
                       }
                    }
                    cout<<endl;
                 }
                 break;
             case 10:
                cout<<" NUMBER 1 "<<endl;
                for (int i=1; i<=n;i++){
                    for (int j=1; j<=i; j++){
                    cout<<j;
                }
                cout<<endl;
                }
                break;
                case 11:
                cout<<" Number 2"<<endl;
                for (int i=1; i<=n;i++){
                    for(int j=1; j<=n;j++){
                       cout<<j;
                    }
                    cout<<endl;
                }
                break;
                case 12:
                    cout<<"  ALPHABET 1:"<<endl;
                    cout<<"  Please enter a number between 1 and 26." <<endl;
                    cin>>n;
                    if (n >= 1 && n <= 26) {
                for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n - i; ++j) {
                cout << " ";
            }
            for (int j = 1; j <= i; ++j) {
                char ch = 'a' + j - 1;
                cout << ch;
            }
            for (int j = i - 1; j >= 1; --j) {
                char ch = 'a' + j - 1;
               cout << ch;
            }
           cout << endl;
        }
    } else {
        cout << "Invalid input. Please enter a number between 1 and 26." <<endl;
    }
                    break;
                    case 13:
                cout<<" ALPHABET 2 "<<endl;
              cout << "Enter the number of rows for the right-angled triangle: ";
                   cin >> n;
    if (n >= 1 && n <= 26) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                char ch = 'A' + j - 1;
                cout << ch;
            }
            cout <<endl;
        }
    } else {
     cout << "Invalid input. Please enter a number between 1 and 26." <<endl;
    }
                break;
           case 14:
            const int width = 5;
    for (int i = 10; i <= 49; i += 10) {
        for (int j = i; j <= i + 9; ++j) {
           cout << setw (width) << j;
        }
       cout <<endl;
    }
        break;
     
     }
    }
    return 0;
}


