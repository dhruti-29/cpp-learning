#include <iostream>
using namespace std;

class complex{
int a,b;

public : 
void setdata(int v1 ,int v2){
a= v1;
b=v2;
} 

void setdatasum(complex o1 , complex o2){
a=o1.a+o2.a;
b=o1.b+o2.b;
}
void printdata(){
    cout<<"print data : "<<a<<" +  "<<b<<endl;
}

};

int main() {
    complex c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(6,7);
    c3.setdatasum(c1,c2);
    
    c3.printdata();
    return 0;
}
