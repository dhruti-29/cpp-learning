#include <iostream>
using namespace std;

int main() {
    int* p = new int;
    *p = 10;

    cout<<p; //adress
    delete p;
    return 0;
}
