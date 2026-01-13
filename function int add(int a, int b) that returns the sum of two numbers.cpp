#include<iostream>
using namespace std;

int sum(int a,int b);
int sum(int a , int b){
    return a+b;
}

int main(){
    int x =9 ,y=10;
    cout<<sum(x,y);
}