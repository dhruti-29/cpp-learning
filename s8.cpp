#include <iostream>
using namespace std;
class cal{

    public:
    static int count;
    int facto(int n){
        count++;
if(n==0 || n==1){
return 1;

}
return n * facto(n-1);
    }

    void display(int n){
        cout<<"answer :"<<facto(n)<<endl;
        cout<<" times the function is called : "<<count<<endl;
    }
};
int cal :: count = 0;
int main() {
    cal c1;
//c1.facto(4);
c1.display(4);
    return 0;
}
