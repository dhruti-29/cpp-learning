#include <iostream>
using namespace std;

class cal{


    public :

    int add(int a, int b){
return a+b;
    }

    float add(float a,float b){
        return a+b;
    }

    string add(int a , int b, int c ,int d){
        int j =a+c;
        int e = b+d; 
return to_string(j) + " + " +
               to_string(e) + "i";
   
}
};
int main() {
    cal c1;

    cout<<c1.add(2,3)<<endl;
    cout<<c1.add(3.4f , 4.5f)<<endl;
    cout<<c1.add(1,2,3,4)<<endl;
    
    return 0;
}
