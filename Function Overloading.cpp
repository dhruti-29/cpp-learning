#include <iostream>
using namespace std;


int add(int a, int b){
    return a+b;
}

float add(flaot a,float b){
    return a+b;
}
int main() {
    cout<<"sum : "<<add(2,4)<<endl;
    cout<<"sum :"<<add(2.5f,4.5f)<<endl;
    
    return 0;
}
