#include <iostream>
using namespace std;

int main() {
    
    int a =10 ,b=0;

    try{
if(b==0){
    throw "division by zero error !";
    cout<<"result : "<<a/b<<endl;
}
    }
catch(const char* msg){
    cout<<"exception caught :"<<msg<<endl;
}
    
    
    return 0;
}
