#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main() {
    
    unordered_map<string ,int> studentgrades;

    studentgrades["bhadu"] = 99;
    studentgrades["drashti"] = 59;
    studentgrades["kaki"] = 34;

    string student = "kaki";

    if(studentgrades.find(student)!=studentgrades.end()){
        cout<<student<<"student grade : "<<studentgrades[student]<<endl;
    }
else {
    cout<<"not found"<<endl;
}

for(const auto& pair :studentgrades){
    cout<<pair.first<<" : "<<pair.second<<endl;
}

    return 0;
}
