#include<iostream>
using namespace std;

int main(){
    int i=0;
    int num;
    cin>>num;
    int sum =0 ,rem;
    while(num!=0){
        rem =num%10;
        sum = sum + rem;
        num = num/10;
i++;
    }
cout<<"the sum of digits is : "<<sum;
}