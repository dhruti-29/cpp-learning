#include <iostream>
#include<forward_list>
using namespace std;

int main() {
    
    forward_list<int> fl ={20,30};
    auto it = fl.before_begin();

    fl.insert_after(it ,10);

    for (int x : fl) cout << x << " ";
    return 0;
}
