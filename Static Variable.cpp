#include <iostream>
using namespace std;


void countcell(){
    static int x=0;
    x++;
    cout<<x<<endl;
}
int main() {
     countcell();
     countcell();
     countcell();
     countcell();
    return 0;
}
