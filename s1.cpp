#include <iostream>
using namespace std;

class syste {

private:
    int pin = 999;   

public:
    friend void check(syste p);
};

void check(syste p) {

    int x;

    cout << "Enter PIN: ";
    cin >> x;

    if (x == p.pin) {   
        cout << "Correct PIN" << endl;
    }
    else {
        cout << "Incorrect PIN";
    }
}

int main() {

    syste s1;
    check(s1);

    return 0;
}