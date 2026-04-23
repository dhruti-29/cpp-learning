#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;

    s.assign("hello,world !"); //c style 
    cout<<s<<endl;

    string p = "c++ programming"; // c++ style 
    s.assign(p,2,5);
    cout<<s<<endl;


    return 0;
}
