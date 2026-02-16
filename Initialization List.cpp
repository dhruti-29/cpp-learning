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
    
    return 0;
}
