#include <iostream>
#include<set>
using namespace std;

int main() {
    set<int> s = {10,20,30,40,50};
//Lower Bound looks for the number itself. If the number is missing, it jumps to the next bigger one.
    auto lb = s.lower_bound(30);
    cout<<"lower bound of 30 : "<<*lb<<endl;


    //Upper Bound ALWAYS jumps to the next bigger number, even if the number you are looking for is already there.
    auto ub = s.upper_bound(30);
    cout<<"upper bound of 30 : "<<*ub<<endl;
    return 0;
}
