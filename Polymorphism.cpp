#include <iostream>
using namespace std;
  class base{
        public:
        void show(){
            cout<<"base class"<<endl;
        }

    };

    class derived : public base{
        public:
        void show(){
            cout<<"derived class"<<endl;
        }
    };
int main() {
    base* b;
    derived d;

    b = &d;
    b->show();
    //b = &d → base pointer derived object ne point kare chhe

    return 0;
}
