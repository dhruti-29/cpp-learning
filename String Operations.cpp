#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";

    // Assignment
    string s3 = s1;

    // Concatenation
    string s4 = s1 + " " + s2;

    // Compare
    if (s1 == s2)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";

    // Swap
    swap(s1, s2);
    cout << "After swap: " << s1 << " " << s2 << endl;

    // Substring
    string sub = s4.substr(0, 5);
    cout << "Substring: " << sub << endl;
}