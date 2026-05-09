#include <iostream>
using namespace std;

class DivideByZero {
public:
    void showMessage() {
        cout << "Error: Division by zero!" << endl;
    }
};

int main() {
    int a = 10, b = 0;

    try {
        if (b == 0)
            throw DivideByZero();

        cout << "Result = " << a / b << endl;
    }
    catch (DivideByZero &e) {
        e.showMessage();
    }

    return 0;
}