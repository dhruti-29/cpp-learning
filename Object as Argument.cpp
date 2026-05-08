#include <iostream>
using namespace std;

class number{

public:
int x;

number(int a){
    x = a;
}

number add(number n){
    return number(x + n.x);
}

};
int main() {
    
    number n1(10), n2(20);
    number resulit = n1.add(n2);
cout<<resulit.x;
    return 0;
}
