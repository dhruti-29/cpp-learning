#include <iostream>
using namespace std;



// display
template <class t>
void show(t a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}



// max value
template <class t>
t getmax(t a[], int n) {
    t m = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > m)
            m = a[i];
    }
    return m;
}



// reverse
template <class t>
void rev(t a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        t temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}



// leader elements
template <class t>
void leader(t a[], int n) {
    t maxr = a[n - 1];
    cout << "leaders: " << maxr << " ";

    for (int i = n - 2; i >= 0; i--) {
        if (a[i] > maxr) {
            maxr = a[i];
            cout << maxr << " ";
        }
    }
    cout << endl;
}





int main() {

    // int array
    int a[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    cout << "int array:\n";
    show(a, n);

    cout << "max: " << getmax(a, n) << endl;

    rev(a, n);
    cout << "reverse: ";
    show(a, n);

    leader(a, n);

    // float array
    float b[] = {1.1, 3.5, 2.2, 5.0};
    int n2 = 4;

    cout << "\nfloat array:\n";
    show(b, n2);

    cout << "max: " << getmax(b, n2) << endl;

    rev(b, n2);
    cout << "reverse: ";
    show(b, n2);

    leader(b, n2);

    // char array
    char c[] = {'a', 'x', 'b', 'z'};
    int n3 = 4;

    cout << "\nchar array:\n";
    show(c, n3);

    cout << "max: " << getmax(c, n3) << endl;

    rev(c, n3);
    cout << "reverse: ";
    show(c, n3);

    leader(c, n3);

    return 0;
}