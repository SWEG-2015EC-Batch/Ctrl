// PATTERN
#include <iostream>
  using namespace std;
int main() {
     int n;
     // TO ENTER THE NUMBER OF THE ROW
      cout << "   Enter the number of rows: ";
        cin >> n;
        cout<<endl;
        if(n>1){
    // TO DRAW THE PATTERN BASED ON THE GIVEN ROW
          for (int i = 0; i < n; i++) {
                for (int j = 0; j < i; j++) {
            cout << " ";        }
             for (int j = 0; j < n - i; j++) {
        cout << char('A' + j);        }
               for (int j = n - i - 2; j >= 0; j--) {
            cout << char('A' + j);        }
                cout << endl;    }
                   for (int i = n - 2; i >= 0; i--) {
                for (int j = 0; j < i; j++) {
        cout << " ";        }
            for (int j = 0; j < n - i; j++) {
            cout << char('A' + j);        }
            for (int j = n - i - 2; j >= 0; j--) {
                cout << char('A' + j);        }
            cout << endl;
             }
        }else{
          // ERROR MESSAGE FOR INVALID ENTER
           cout<<"  *******ERROR********"<<endl;
           cout<<"  ENTER THE CORRECT NUMBER OF ROW:  ";
           cin>>n;
           cout<<endl;
           for (int i = 0; i < n; i++) {
                for (int j = 0; j < i; j++) {
            cout << " ";        }
             for (int j = 0; j < n - i; j++) {
        cout << char('A' + j);        }
               for (int j = n - i - 2; j >= 0; j--) {
            cout << char('A' + j);        }
                cout << endl;    }
                   for (int i = n - 2; i >= 0; i--) {
                for (int j = 0; j < i; j++) {
        cout << " ";        }
            for (int j = 0; j < n - i; j++) {
            cout << char('A' + j);        }
            for (int j = n - i - 2; j >= 0; j--) {
                cout << char('A' + j);        }
            cout << endl;
        }
         }       return 0;

                }
