#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    vector<int> vec= {1,2,3,4,5};

    cout<<"fiest element : "<<vec.front()<<endl;
    cout<<"last element : "<<vec.back()<<endl;
    cout<<"elemrnt at index 2 :  "<<vec[2]<<endl;
    
    return 0;
}
