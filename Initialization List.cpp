/*
Use: Constructor ma variables direct initialize karva
Why needed: Faster + const/reference variables mate required
Main use: Efficient object initialization.
*/



#include <iostream>
using namespace std;

class rectangle{
int length;
int width;
int area;

public:
rectangle(int l ,int w) :length(l) , width(w){

    /* why this is use ?? 
    
    Direct initialization
 No extra step
More efficient
    */

}

void display(){
area = length * width;

cout<<"area : "<<area<<endl;

}

};
int main() {
    
    rectangle r1(2,3);
    r1.display();
    return 0;
}
