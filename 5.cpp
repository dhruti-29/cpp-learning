#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);   // 👈 input string use karo
    vector<int> v;
    
    int num;
    char ch;
    
    while (ss >> num) {     // number read karo
        v.push_back(num);   // vector ma add karo
        ss >> ch;           // comma skip karva mate
    }
    
    return v;               // 👈 return vector
}

int main() {
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}