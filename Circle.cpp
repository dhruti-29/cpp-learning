#include <iostream>
using namespace std;

class circle{

int r;

public:

circle(){

    cout<<"enter radius :"<<endl;
    cin>>r;

    cout<<"enter area : "<< 3.14 * r * r<<endl;
   

}




};
int main() {
    
    circle c1;
    return 0;
}
