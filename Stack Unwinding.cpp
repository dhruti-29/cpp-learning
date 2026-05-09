#include <iostream>
#include <stdexcept>
using namespace std;


class demo{
string name;
public:
demo(string n) : name(n){
    cout<<"constructor : "<<name<<endl;
}
~demo(){
    cout<<"destructor :"<<name<<endl;
}
};

void test(){
    demo d1("loacal object in test()");
    throw runtime_error("exception in test()");
}
int main() {
    try{
demo d2("local object in main()");
test();
    }
    
        catch(exception &e){
            cout<<"caught exception :"<<e.what()<<endl;
        }
    

    return 0;
}
