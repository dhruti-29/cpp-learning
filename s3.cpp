#include <iostream>
using namespace std;

class product{

float price;
int quantity;

public:
product(float p ,int q =1){
    price = p;
    quantity = q;

}

float totalcost(){
    return price * quantity;
}

float add(product p){
    return totalcost() + p.totalcost();//main mistake
}
};


int main() {
    
    product p1(100,2);
product p2(50);
    float result = p1.add(p2);
    cout<<"cost : "<<result;
    return 0;
}
