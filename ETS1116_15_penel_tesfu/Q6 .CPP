//program involving salary
#include <iostream>

using namespace std;

int main() 
{
    const int transmission_rate = 960; // it is true that in 1 bytes there is 1 character
     int numberofbytes,timetaken;
     float timetakeninhour,timetakenindays;
     cout<<" This helps to calculate howlong it will take to transmit a file"<<endl;
     cout<<"Enter the file size in bytes \n";
     cin>>numberofbytes;
     
     timetaken=numberofbytes/transmission_rate;
     
	 cout<<"This is the time taken in second \n=" <<timetaken<<endl;
	 
	 timetakeninhour=timetaken/3600;
	 cout<<"This is the time taken in hour \n="<<timetakeninhour<<endl;
	 
	 timetakenindays=timetakeninhour/24;
	 cout<<"This is the time taken in days \n="<<timetakenindays<<endl;
	 
      return 0;
}
