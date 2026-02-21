#include <bits/stdc++.h>
using namespace std;


int main(){
cout<<"Hello, Today you will guess the generated number! Let's GO!"<<endl;
    srand(time(0));
    int ran = rand() % 101;
    int n;
    int att = 5;
    while(att--){
        cin>>n;
        if(n<ran){
            cout<<"BIGGER"<<endl;
        }
        
        else if(n>ran){
            cout<<"SMALLER"<<endl;
        }
        
        else{
            cout<<"YOU WON!"<<endl;
            return 0;
        }
    }
        cout<<"YOU LOST YOUR NUMBER WAS: "<<ran<<endl;
}
