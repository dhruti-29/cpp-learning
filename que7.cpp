#include <iostream>
using namespace std;

class temperature{
int temp;
public:
 explicit  temperature(int e){
   temp = e ;
}

void display(){
    cout<<"tempreature : "<<temp<<endl;
}
};



int main() {
    temperature t1(200);
    t1.display();
    
    return 0;
}
