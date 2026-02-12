#include <iostream>
using namespace std;

class intrest{
int p,t;
float r;

public:

intrest(int paisa , float rate , int time){
p = paisa;
r = rate;
t =time;


    int intrestvalue = (p * r * t)/100;

    cout<<"totl interest value is :   "<<intrestvalue<<"when p r t is "<<p<<r<<t<<endl;

}

};
int main() {
    intrest obj1(5000, 7.5, 3);
intrest obj2(500, 7, 30);




    return 0;
}
