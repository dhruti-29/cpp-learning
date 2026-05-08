#include <iostream>
using namespace std;
class s{
private : 
int x =10;

public:
friend void print(s);


};

void print(s obj){
cout<<"a is "<<obj.x<<endl;
}


int main() {

s obj;
print(obj);
    return 0;
}
