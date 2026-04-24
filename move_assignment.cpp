#include <iostream>
#include<string>
using namespace std;

int main() {
    string str1 = " i am dhruti  viradiya from. cs depatament";
    string str2 =std :: move(str1);

    cout<<"first:"<<str1<<endl;

    cout<<"second : "<<str2<<endl;
    return 0;
}
