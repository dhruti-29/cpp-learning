#include <iostream>
using namespace std;

class base{
        public:
        virtual ~base(){
cout<<"base destructor"<<endl;
 }
    };

    class de : public base{
        public:
        ~de(){
            cout<<"derived destructor"<<endl;
        }
    };
    
int main() {
    
    base* b = new de();
    delete b;
    return 0;
}
