/*
Use: Derived class create thata base class pan initialize thay
Why needed: Proper object initialization mate
Main use: Parent + child data correct set thay.
*/


#include <iostream>
using namespace std;

class person{
    public :
string name;
int age;


    person(string n,int a){
name =n ;
age = a;

    }

};
class employee : public person{

    int id ;

    public :
//this main difference
// inshort inhertance ni jem constructor ....
    employee(string n, int a, int i) : person(n,a){
id =i;
// Initialization list (Base constructor call)
    }

    void display(){

        cout<<"****DETAILS****"<<endl;
        cout<<"NAME : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"AGE : "<<age<<endl;

    }

};
int main() {
    
    employee e1("dhruti" , 17 , 113);

    e1.display();
    return 0;
}
