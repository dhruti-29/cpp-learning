#include <iostream>
#include<map>
#include<sstream>
using namespace std;

int main() {
    
    string s="I am I";
map<string,int> freq;

stringstream ss(s);
string word;

while(ss >> word){
    freq[word]++;
}
for(auto x : freq){
    cout<<x.first<<" : "<<x.second<<endl;
}

    return 0;
}
