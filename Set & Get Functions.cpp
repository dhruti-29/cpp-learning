#include <iostream>
using namespace std;

class student{
string name;
int num;

public:

void set(){
    cout<<"enter name :"<<endl;
    cin>>name;

    cout<<"enter num :"<<endl;
    cin>>num;
}

void get(){ 
    cout<<"details"<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"num : "<<num<<endl;
}
};
int main() {
    student s1;
    s1.set();
    s1.get();
    
    return 0;
}
