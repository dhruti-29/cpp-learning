#include <iostream>
using namespace std;

class counting{

  public :
    static int count;
    
    counting(){
        count++;
    }
static void print(){

    cout<<count<<endl;
}

};
int counting::count = 0;
int main() {
    counting c1,c2;
   // c1.print();
    //c2.print();
    counting::print();

    return 0;
}
