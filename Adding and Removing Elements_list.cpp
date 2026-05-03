#include <iostream>
#include<list>
using namespace std;

int main() {
    
    list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    
    lst.pop_back();

    cout<<"list : ";
    for(int num : lst){
        cout<<num<<" ";
    }
    return 0;
}
