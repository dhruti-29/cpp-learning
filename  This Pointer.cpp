/*
Use: Current object ne refer karva (this->)
Why needed: Same name variables confuse thay to current object identify karva.
Main use: Object potane access kare.

*/


#include <iostream>
using namespace std;

class student{
int id;
string name;

public:
student(int id ,string name){
    this->id = id;
    this->name = name;
}
    
void display(){
    cout<<"NAME : "<<name<<endl;
    cout<<"ID : "<<id<<endl;

}
};
int main() {
    student s1(113,"dhruti");
    s1.display();
    return 0;
}
