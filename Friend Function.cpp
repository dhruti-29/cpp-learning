#include <iostream>
using namespace std;

class box {
int l ,w;
public :
box(int a,int b){ 
    l=a;
    w=b;

}
friend void display(box); 
};
void display(box s){
    cout<<"value of a :"<<s.l * s.w<<endl;
}
int main() {
    box b1(5,4);
    display(b1);
    return 0;
}
