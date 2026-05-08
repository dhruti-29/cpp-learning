#include <iostream>
using namespace std;

int sum(int a,int b= 100){
    return a+b;
}
int main() {
    cout<<"ans1 :"<<sum(10,34)<<endl;
    cout<<"ans2 : "<<sum(23);

    return 0;
}