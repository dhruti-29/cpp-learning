#include <iostream>
using namespace std;

class student{
public:
int x = 10;

void print()const{
    cout<<x<<endl;
}


};
int main() {
    
    student s1;
    s1.print();
    return 0;
}
