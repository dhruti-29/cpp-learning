#include <iostream>
using namespace std;

class employee{

public:
inline static int count =0;
int id ;

void c(){
    count++;
    cout<<"number is : "<<count;
}


};
int main() {
    employee e1,e2;

    e1.c();
    e2.c();
    
    return 0;
}
