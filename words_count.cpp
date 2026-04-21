#include <iostream>
#include<sstream>
#include<string>
using namespace std;

int counting(string s){
    stringstream str(s);
    string word;
    int count =0;

    while(str >> word){
        count++;
    }
    return count;
}
int main() {
    string f;
    getline(cin,f);
    cout<<"answer : "<<counting(f);
    return 0;
}
