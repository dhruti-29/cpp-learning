/*
Use: Diamond problem solve karva (multiple inheritance)
Why needed: Duplicate base object avoid karva
Main use: Single shared base class.
*/

#include <iostream>
using namespace std;


class person{

    public :
string name;


virtual void display(){

    cout<<"enter name :"<<endl;
    cin>>name;

}
};

class empolyee : virtual public person{

int id;

public :
void display(){

    cout<<"enter name:"<<endl;
    cin>>name;

    cout<<"enter id :"<<endl;
    cin>>id;

}

};
int main() {
   
person*  p;
empolyee e;

p =&e;
p->display();

    return 0;
}
