//Create a class Demo and define function outside the class using scope resolution operator.

#include <iostream>
using namespace std;

class  demo{


    public :
 int num;
    void d();
};

void demo :: d(){
    cin>>num;
cout<<"value of d is "<<num<<endl;
}
int main() {
    
    demo d1;
    d1.d();

    return 0;
}
