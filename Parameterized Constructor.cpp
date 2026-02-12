#include <iostream>
using namespace std;

class rectangle{
int l,w,area;

public :

rectangle(int length , int width){

    l = length;
    w = width;
}

void areafun(){
area = l * w;
cout<<"area is : "<<area<<endl;
}


};

int main() {
    
rectangle r1(4,5);
rectangle r2(40,50);

r1.areafun();
r2.areafun();

    return 0;
}
