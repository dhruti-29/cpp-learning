#include <iostream>
#include<memory>
using namespace std;

int main() {
    
     unique_ptr <int> p1 (new int(10));
cout<<*p1<<endl;
     p1.reset(new int(100676789));
     cout<<*p1<<endl;
    return 0;
}
