#include <iostream>
using namespace std;
/* 

Normally:

private and protected data members cannot be accessed directly from outside the class.

But if you declare a friend class:

Then another class gets special permission
And it can access the private and protected members of that class directly.

*/
class A{

    string name;
    public :
    void display(){
        cin>>name;
        cout<<"name : "<<name<<endl;
    }

    friend class b;
};

class b{

    public:
    void ss(A obj){
cout<<obj.name;
    }
};

int main() {
    A a1;
    a1.display();

    b b1;
    b1.ss(a1);
    return 0;
}
