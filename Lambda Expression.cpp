#include <iostream>
using namespace std;

int main() {
    
    auto add =[](int a,int b){return a+b;};
cout<<"sum : "<<add(3,4)<<endl;


    int x = 10;
    auto printx =[x]{cout<<"value of X : "<<x<<endl;};
    printx();

int x1 = 500;
auto modify = [&x1](){x1= 20;};
modify();
cout<<"modifed : "<<x1<<endl;


auto multiply = [](int a,int b) -> int {return a*b;};
//diffrenent synatax 
cout<<"product : "<<multiply(3,4)<<endl;
    return 0;
}
