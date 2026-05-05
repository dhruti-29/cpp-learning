#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    string city = "Anand";
};

class Student {
public:
    Address *addr;   

    void show() {
        cout << addr->city;
    }
};

int main() {
    Address a;
    Student s;

    s.addr = &a;   
    s.show();
}