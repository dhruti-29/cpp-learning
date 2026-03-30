#include <iostream>
using namespace std;

class A{
    public:
    void show(){

        cout<<"class A function"<<endl;

    }


};
class B{
public:
void show(){
    cout<<"class B function"<<endl;

}
};

class C : public A , public B{

};
int main() {
    C obj;
    //obj.show();
    //give error
    obj.A::show();
    obj.B::show();
    return 0;
}
