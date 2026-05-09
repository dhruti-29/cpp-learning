#include <iostream>
using namespace std;

class base{
    public:
    virtual void show(){
        cout<<"base"<<endl;
    }
};

class derived : public base{
    public:
    void show(){
        cout<<"derived"<<endl;
    }
};

int main() {
base* b; //base class --pointer 
derived d; //dervied class object

b = &d; //base class pointer thi dervied class n
b->show(); //base class thi call karvyu atle dervied print thase

    return 0;
}
