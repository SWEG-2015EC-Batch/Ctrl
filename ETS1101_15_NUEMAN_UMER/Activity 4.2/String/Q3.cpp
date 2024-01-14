//This program  remove non-alphabet character from string
#include <iostream>
#include <string>
using namespace std;

int main(){
    string words;

    cout<<"enter your word : ";
    getline(cin,words);

    cout<<"Your character without non- alphabrt character is ";
    for(int i=0; i<words.size(); i++){
        if(isalpha(words[i])){
            cout<<words[i];
        }else{
            continue;
        }
    }

    return 0;
}
