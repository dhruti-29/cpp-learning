#include <iostream>
using namespace std;

class test{
public:
int a;
int b;
};


int main() {
    
    test t1,t2;

    t1.a = 10;
    t1.b = 20;

    t2 = t1;

    cout<<"t1 values : "<<t1.a<<" t2 values :"<<t2.b<<endl;
    cout<<"t2 values:  "<<t2.a<<" t2 values :"<<t2.b<<endl;

    return 0;
}
