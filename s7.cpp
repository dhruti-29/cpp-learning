#include <iostream>
using namespace std;

class Calculator {
    float amount;

public:
    Calculator(float a) {
        amount = a;
    }

    // 1. Fixed discount (int)
    void discount(int d) {
        float final = amount - d;
        cout << "Final Price (Fixed): " << final << endl;
    }

    // 2. Percentage discount (float)
    void discount(float p) {
        float final = amount - (amount * p / 100);
        cout << "Final Price (Percentage): " << final << endl;
    }

    // 3. Promo code (string)
    void discount(string code) {
        float final = amount;

        if (code == "SAVE10")
            final -= 100;
        else if (code == "SAVE20")
            final -= 200;

        cout << "Final Price (Promo): " << final << endl;
    }
};

int main() {

    Calculator c1(2000);

    c1.discount(100);        // fixed
    c1.discount(20.0f);      // percentage
    c1.discount("SAVE10");   // promo

    return 0;
}