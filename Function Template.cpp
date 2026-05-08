#include <iostream>
using namespace std;

 template<class t>
 t add(t x,t y){
    return x + y;
 }
int main() {
    cout<<add(2,3)<<endl;
    cout<<add(2.3 ,4.5)<<endl;
    return 0;
}
