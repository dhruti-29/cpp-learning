/* Base pointer + Derived object = 
Runtime polymorphism implement  */

/*
Use: Base pointer thi derived object access
Why needed: Runtime polymorphism mate
Main use: Same pointer thi different objects handle.
*/

#include <iostream>
using namespace std;

class student{
protected:
int id;

public :

virtual void display(){

    cout<<" enter id :"<<endl;
    cin>>id;
}
};

class moniter : virtual public student{
protected:
int rank;

public :
virtual void display(){

    cout<<" enter id :"<<endl;
    cin>>id;
    
cout<<"enter rank :"<<endl;
cin>>rank;


}
};
int main() {
    
    student *s;
    moniter m;

    s = &m;        
    s->display();  
    return 0;
}
/* What does this do?

👉 A pointer of the base class is created
👉 But it points to an object of the derived class
👉 Then a function is called through that pointer

Meaning:
We access a child (derived) object using a parent (base) class pointer.

Why is this used?

👉 For runtime polymorphism
👉 To handle different objects using a single pointer
👉 To make the code more flexible and reusable 
*/
 