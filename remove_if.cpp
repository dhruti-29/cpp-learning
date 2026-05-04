#include <iostream>
#include<forward_list>
using namespace std;

int main() {
    forward_list<int>fl ={10,15,20,25,30};

    fl.remove_if([] (int n) {return n >20;});

    cout<<"after remove_if : ";
    for(int x : fl){
        cout<< x <<" ";

    }
    return 0;
}
