#include <iostream>
using namespace std;

class student{

    int id ;
    public :
    student(int i){
        id = i;
        cout<<"id no : "<<id<<endl;

    }
    ~ student(){ 

        cout<<"distrouctor";
    
    }
        

};
int main() {
    
    student s1(4);
    
    return 0;
}
