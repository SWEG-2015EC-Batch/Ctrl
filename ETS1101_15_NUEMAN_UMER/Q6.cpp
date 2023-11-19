//a program that will calculate how long it will take to send a file, given the file size
#include<iostream>
using namespace std;

int main(){
    float fileSize;
    int time;

    //insertion
    cout<<"Please enter the file size in bytes ->";
    cin>>fileSize;

    //opreation
    time = fileSize / (960 * sizeof(char));

    //display total time taken
    cout<<"The amount of time to send "<<fileSize<<" bytes of data is "<<time<<" seconds";

    return 0;
}