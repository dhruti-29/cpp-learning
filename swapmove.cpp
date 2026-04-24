#include <iostream>
#include<string>
using namespace std;

int main() {
    
    string s1 = "dhruti";
    string s2 = "viradiya";
cout<<"BEFORE swap : "<<s1<<" "<<s2<<endl;
    string temp = std::move(s1);
     s1 = std::move(s2);
 s2 = std::move(temp);

 cout<<"AFTER SWAP :"<<s1<<" "<<s2<<endl;
    return 0;
}
