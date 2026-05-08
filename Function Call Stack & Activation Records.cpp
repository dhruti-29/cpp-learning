#include <iostream>
using namespace std;

void fun1(){
    cout<<"fun1"<<endl;

}

void fun2(){
    cout<<"fun2"<<endl;
    fun1();
}

void fun3(){
    cout<<"fun3"<<endl;
fun2();
}

int main() {
    cout<<"main part"<<endl;
    fun2();

    return 0;
}

