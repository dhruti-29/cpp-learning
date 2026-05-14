#include <iostream>
using namespace std;

class Bank {
    double balance;
    string type;   // "INR" or "USD"

public:
    // Constructor
    Bank(double b, string t) {
        balance = b;
        type = t;
    }

    // Function to convert everything to INR
    double toINR() {
        if (type == "USD")
            return balance * 80;   // conversion
        else
            return balance;
    }

    // Add two balances
    double add(Bank b) {
        return this->toINR() + b.toINR();
    }

    // Display
    void display() {
        cout << "Balance: " << toINR() << " INR" << endl;
    }
};

int main() {

    Bank b1(1000, "INR");   // INR
    Bank b2(10, "USD");     // USD

    double total = b1.add(b2);

    cout << "Final Balance in INR: " << total << endl;

    return 0;
}