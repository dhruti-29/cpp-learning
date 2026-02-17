#include <iostream>
using namespace std;


class shape{
public:
virtual void area(){
 cout<<"area of shape"<<endl;
}

};

class circle : public shape{
int r;

public :
circle(int radius){
   r =  radius; 
}
void area(){
    cout<<"AREA : "<<3.14 * r * r<<endl;
}
};


class square : public shape{
int l;

public :
square(int length){

    l = length;

}

void area(){

    cout<<"AREA : "<<l*l<<endl;
}


};

int main() {
    shape* s;
    circle r(3);
    square a(4);

/* Polymorphism occurs when the base class pointer Shape* s calls different area()
 functions depending on the object (Circle or Rectangle) it points to at runtime. */

    s = &r;
    s->area();

    s= &a;
    s->area();
    return 0;
}
