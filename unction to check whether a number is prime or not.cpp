#include<iostream>
using namespace std;

void prime(int n);
void prime(int n){
    int p=1;
    for(int i =2;i<n;i++){
        if(n % i == 0 ){
            p = 0;
        }
    }  
    if(p==0){
        cout<<"prime number"; 
    }
    else {
        cout<<"not prime";
    }
}


int main(){
    int x = 41;
    prime(x);
}