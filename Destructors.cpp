#include <iostream>
using namespace std;

class d{

int num;
public:
d(){
    cout<<"constructore called !!"<<endl;
}

~d(){
    cout<<"distructor called !!"<<endl;
}
};
int main() {
    
d d1;
d d2;


    return 0;
}
