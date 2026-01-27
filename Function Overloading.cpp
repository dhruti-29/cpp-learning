#include <iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}
int main() {
    cout<< "the value sum is : "<<sum(2,3)<<endl;
    return 0;
}
