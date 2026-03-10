#include <iostream>
using namespace std;

class Calculator{
int a;
int b;
int sum;
int sub;
int mul;
public:
void setdata(){
cout<<"enter details"<<endl;
cout<<"enter a :"<<endl;
cin>>a;

cout<<"enter b :"<<endl;
cin>>b;

}

void add(){
sum = a+b;
cout<<"sum is :"<<sum<<endl;

}
void subtract(){
sub = a- b;
cout<<"subtract is :"<<sub<<endl;

}

void multiply(){
mul = a*b;
cout<<"multiply value is :"<<mul<<endl;

}

};
int main() {
    
    Calculator c1;
    c1.setdata();
    c1.add();
    c1.subtract();
    c1.multiply();

    return 0;
}
