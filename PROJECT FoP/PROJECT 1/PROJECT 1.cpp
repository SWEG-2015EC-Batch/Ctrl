//Academic Study Performance Analyzer by ctrl
#include <iostream>
#include <string>
#include <cctype>
#include<iomanip>
using namespace std;

int main() {
  //Variable Declaration
  int n;
  float average;
  cout<<" ENTER THE NUMBER OF STUDENTS:"<<endl;
  cin>>n;
  int performance[n][7];
  char firstname[n][10],lastname[n][10];
  // To accept personal information
  for (int i=0;i<n;i++){
    cout<<" Enter first name of student " <<i+1<<endl;
    cin>>firstname[i];
    cout<<" Enter last name of student "<<i+1<<endl;
    cin>>lastname[i];
    cout<<"Enter the performance hour 0-24: "<<endl;
    for(int j=0;j<7;j++){
    cout<<" for the "<<j+1<<" day"<<endl;
    cin>>performance[i][j];
    // Not to enter more than 24 hour
        if(performance[i][j]<=24&&performance[i][j]>=0){
    }else{
        cout<<"\n invalid: Enter the correct entry:";
       cin>>performance[i][j];
    }
    }
    }
    cout<<endl;
    cout<<" TABLE-1:STUDENTS PERFORMANCE ANALYSIS TABLE"<<endl<<endl;
  // To calculate total hour/average and Display output
  for( int i=0;i<n;i++ ){
    for( int j=0;j<20;j++ ){
    firstname[i][j]=toupper(firstname[i][j]);
    lastname[i][j]=toupper(lastname[i][j]);
  }
  }
    // The tabular format
     cout<< " Rolno. "<< "     Student Name          DAY-1 |   DAY-2 |   DAY-3 |   DAY-4 |   DAY-5 |   DAY-6 |   DAY-7 |   Total Hour"<<endl;
     cout<<"_______________________________|_________|_________|_________|_________|_________|_________|_________|__________________"<<endl;
  for (int i = 0; i < n; i++) {
    cout<<"   "<< i + 1<<right<<setw(14)<<firstname[i] << " "<<left<<setw(12)<<lastname[i];
    int totalhourofweek = 0;
    for (int j = 0; j < 7; j++) {
        totalhourofweek += performance[i][j];
        cout<<"|"<<right<<setw(8) << performance[i][j]<<" ";
    }
    cout << "|"<<setw(11) << totalhourofweek << endl;
     }
   cout<<"_______________________________|_________|_________|_________|_________|_________|_________|_________|__________________"<<endl;
   cout <<"             Average           ";
       for (int j = 0; j < 7; j++) {
    int totalhourofday = 0;
    for (int i = 0; i < n; i++) {
        totalhourofday += performance[i][j];
    }
    average = totalhourofday / n;
    cout <<"|"<< right<<setw(8)<<average<<" ";
}
cout << endl<<endl;
    while (true){
      cout<<" - TO SEARCH INDIVIDUAL INFORMATION "<<endl;
    cout<<" TO SEARCH BY ROL.NO. ENTER 1/TO SEARCH BY NAME ENTER 2/TO END THE PROGRAM ENTER 0 "<<endl;
    int individual ;
    cin>>individual;
    if(individual==0){
   return 0;
   }else if(individual==1){
     int rolno;
     // Display Individual Information using rol.no.
    cout << "\n Enter your Rol. number"<<endl;
    cin >> rolno;
      --rolno;
    if (rolno >= 0 && rolno < n) {
        cout << "\n Individual Information of the student \n"<<endl;
        cout<< " Rolno. "<< "     Student Name          DAY-1 |   DAY-2 |   DAY-3 |   DAY-4 |   DAY-5 |   DAY-6 |   DAY-7 |   Total Hour"<<endl;
       cout<<"_______________________________|_________|_________|_________|_________|_________|_________|_________|__________________"<<endl;
      int individualSum = 0;
    cout << "   " << rolno + 1<<right<< setw(14) << firstname[rolno] << " " <<left<<setw(12)<< lastname[rolno];
                for (int j = 0; j < 7; j++) {
                    individualSum += performance[rolno][j];
                    cout <<"|"<<right<<setw(8)<<performance[rolno][j] << " ";
                }
                cout<<"|" <<setw(11) <<individualSum << endl;
            } else {
                cout << "Invalid student Roll number." << endl;
            }

      }else if(individual==2){
    string nameone, nametwo;
    cout<<"   Enter first name";
      cin>>nameone;
      cout<<"   Enter last name";
      cin>>nametwo;
      bool found = false;
      for (char &c : nameone) {
        c = toupper(c);
    }
    for (char &c : nametwo) {
        c =toupper(c);
    }
        for (int i = 0; i < n; i++) {
        if (nameone == firstname[i] && nametwo == lastname[i]) {
    // Display Individual Information using name
        cout << "\nIndividual Information of " << nameone<< " " << nametwo<< ":\n \n";
        cout<< " Rolno. "<< "     Student Name          DAY-1 |   DAY-2 |   DAY-3 |   DAY-4 |   DAY-5 |   DAY-6 |   DAY-7 |   Total Hour"<<endl;
        cout<<"_______________________________|_________|_________|_________|_________|_________|_________|_________|__________________"<<endl;
         int individualSum = 0;
    cout << "   " << i + 1<<right << setw(14) << firstname[i] << " "<<left<<setw(12) << lastname[i];
        for (int j = 0; j < 7; j++) {
         individualSum += performance[i][j];
            cout<<"|" <<right<<setw(8)<< performance[i][j] << " ";
            }
        cout <<"|"<<setw(11)<< individualSum << endl;
   found = true;
            break;
                }
            }
        if (!found) {
    cout << "Student not found with the given name." << endl;
            }
        } else {
    cout << "Invalid choice. Please enter 1, 2, or 0." << endl;
        }
  // To see individual information as long as we want
    int m;
    cout<<"\n Enter 0 to stop or enter any number to continue "<<endl;
    cin>>m;
    if(m==0){
        return 0;
    }
}

  return 0;

}
