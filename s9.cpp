#include <iostream>
using namespace std;

class engine {
    int hp;

public:
    engine() {
        cout << "Engine Created" << endl;
    }

    void set() {
        cout << "Enter hp: ";
        cin >> hp;
    }

    void show() {
        cout << "ENGINE DETAILS: " << hp << endl;
    }

    ~engine() {
        cout << "Engine Destroyed" << endl;
    }
};

class car {
    engine e;   // composition -  has a relation

public:
    car() {
        cout << "Car Created" << endl;
    }

    void set() {
        e.set();   // engine function call
    }

    void display() {
        cout << "\n****DETAILS******" << endl;
        e.show();
    }

    ~car() {
        cout << "Car Destroyed" << endl;
    }
};

int main() {
    car c1;

    c1.set();
    c1.display();

    return 0;
}