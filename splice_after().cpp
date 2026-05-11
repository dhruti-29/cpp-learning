#include <iostream>
#include<forward_list>
using namespace std;

int main() {
    
    forward_list<int> fl1 = {1, 2, 3};
forward_list<int> fl2 = {10, 20};

fl2.splice_after(fl2.begin() ,fl1);
for(int x : fl2){
    cout<<x<<" ";
}
    return 0;
}
