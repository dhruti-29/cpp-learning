#include<iostream>
using namespace std;

int main(){
    string p="abc123";
    string input;
    cin>>input;
    while(1){
        if(input==p){
            cout<<"correct password"<<endl;
            break;
        }
        else{
            cout<<"wrong password , please try again "<<endl;
            cin>>input; 
        }
    }
}