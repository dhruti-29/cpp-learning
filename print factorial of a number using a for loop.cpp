#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int fac= 1;
    for(int i= 1;i<=5;i++){
        fac = fac * i;
    }
    cout<<"factorial of "<<n<<" is : "<<fac;
}