#include <iostream>
using namespace std;

int main() {
    deque<int> d = { 1,2,3,4};

    cout<<"first : " <<d.front()<<endl;
    cout<<"last : "<<d.back()<<endl;
    cout<<"index 2 :  "<<d[2]<<endl;

    return 0;
}
