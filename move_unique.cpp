#include <iostream>
#include<memory>
using namespace std;

int main() {
    //unique_ptr <int> p1 = make_unique <int>(10);
    unique_ptr <int> p1 (new int(10));
    //cout<<*p1;
     unique_ptr <int> p2 (new int(1220));
     p2 = move(p1);
     cout<<*p2<<endl;
     cout<<*p1<<endl;


    return 0;
}
