#include <iostream>
using namespace std;

class student {

    public:
    int r;
    string name;

    void setdata(){
        cin>>name;
        r=23;
    }

    void getdata(){
        cout<<name<<----<<r<<endl; 
    }
};
int main() {
    student s1;
    s1.setdata();
    s1.getdata();
    return 0;
}
