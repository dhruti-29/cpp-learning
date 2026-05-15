#include <iostream>
using namespace std;

class Logger {

public:

    // Function Call Operator Overloading
    void operator()(string msg) {

        cout << "Message : "
             << msg << endl;
    }
};

int main() {

    Logger logger;

    logger("System started");

    return 0;
}