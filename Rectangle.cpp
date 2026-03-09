#include <iostream>
using namespace std;

class rec{
int l;
int w;

public :
void setdata(){
cout<<"enter l :"<<endl;
cin>>l;

cout<<"enter w :"<<endl;
cin>>w;

}
void area(){

cout<<"area is "<<l * w<<endl;

}


void perimeter(){

    cout<<"perimeter is "<<2 * (l+w)<<endl;

}
};
int main() {
    
    rec r1;
    r1.setdata();
    r1.area();
    r1.perimeter();
    return 0;
}
