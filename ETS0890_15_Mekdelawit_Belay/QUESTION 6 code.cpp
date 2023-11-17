#include <iostream>

 using namespace std;

int main()
{
 const int transmission_rate =960;  //it is true that in 1 bytes their is 1 character
    int numberofbytes,timetaken;
    float timetakeninhour,timetakenindays;
  cout<<"   THIS HELPS TO CALCULATE HOWLONG IT WILL TAKE TO TRANSMIT A FILE "<<endl;
cout<<"  Enter The File Size In Bytes    \n " ;
cin>>numberofbytes;

  timetaken=numberofbytes/transmission_rate;

 cout<<"  This is THE TIME TAKEN in SECOND   \n =" <<timetaken<<endl;

  timetakeninhour=timetaken/3600;
  cout<<"  This is THE TIME TAKEN in HOUR   \n ="<<timetakeninhour<<endl;

   timetakenindays=timetakeninhour/24;
   cout<<"  This is THE TIME TAKEN in DAYS   \n ="<<timetakenindays<<endl;
    return 0;
}
