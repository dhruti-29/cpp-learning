#include <iostream>
#include<list>
using namespace std;

int main() {
    
    list<int> lst  = {1,2,3};

    cout<<"first : "<<lst.front()<<" "<<"last :"<<lst.back()<<endl;
    return 0;
}
