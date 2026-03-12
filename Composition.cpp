/*In the given program, Composition is used when the car class contains an object of 
 engin class (engin e;).
 This represents a HAS-A relationship, where a Car has an Engine.*/


#include <iostream>
using namespace std;

class engin{
    public :
void show(){
    cout<<"this is engin part"<<endl;
}
};
class car{
engin e;
public :
void startshow(){
    cout<<"second show..."<<endl;
    e.show();
}
};

int main() {
    car c;
    c.startshow();
    return 0;
}
/* Composition એટલે એક classની અંદર બીજી classનું object member તરીકે હોવું. 

“HAS-A relationship”
*/