/*
Use: Pointer thi object members access karva
Why needed: Pointer direct access mate
Main use: ptr->function() call.
*/


#include <iostream>
using namespace std;

class car {
    int model;
    int price;

public:
    car(int m, int p) {
        model = m;
        price = p;
    }

    void display() {
        cout << "MODEL : " << model << endl;
        cout << "PRICE : " << price << endl;
    }
};

int main() {
    
    car *ptr = new car(2025, 2000000);

    (*ptr).display();   // Same as ptr->display();

    delete ptr;

    return 0;
}

   
/* 
method 1 for multiple object 
Car *ptr = new Car[2] {
        Car("BMW", 5000000),
        Car("Audi", 4000000)
    };

    for(int i = 0; i < 2; i++) {
        ptr[i].display();
    }

    delete[] ptr;
*/

/*
method 2 for multiple object 
Car *ptr1 = new Car("BMW", 5000000);
    Car *ptr2 = new Car("Audi", 4000000);

    ptr1->display();
    ptr2->display();

    delete ptr1;
    delete ptr2;

*/