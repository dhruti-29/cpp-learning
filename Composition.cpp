#include <iostream>
using namespace std;
class Engine {
public:
    void start() {
        cout << "Engine Start\n";
    }
};

class Car {
public:
    Engine e;  // object inside class

    void startCar() {
        e.start();
        cout << "Car Started\n";
    }
};
int main() {
    
    return 0;
}
