#include <iostream>
#include<string>
#include<string_view>
using namespace std;

int main() {
    string s="123";

    int num = stoi(s);
    cout<<num+10<<endl;

    string str = "hello world";
    string_view sv(str);  //string_view ek lightweight view chhe

    cout<<sv.substr(0,5); //hello print
     //substr(start, length)
    return 0;
}
