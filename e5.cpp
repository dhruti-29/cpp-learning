#include <iostream>
using namespace std;
class user{

    public:
int id;
string name;


user(){
    cout<<"enter details :"<<endl;
    cout<<"enter id :"<<endl;
    cin>>id;
    cout<<"enter name : "<<endl;
    cin>>name;
}

};

class customer : public user{

    public:
    float billam;
customer(){

    cout<<"our customer details ID : "<<id<<" "<<"name :"<<name<<" "<<endl;
}
void  payment(int code , float money){

    cout<<"payment using UPI"<<endl;
}

void payment(long code ,float money){
    cout<<"payment using CARD"<<endl;
}

void payment(float money){
    cout<<"payment using CASH"<<endl;
}

void bill(float money){
    cout<<"enter total bill : "<<endl;
    cin>>billam;

    try{
if(money!=billam){
    throw "INVALID PAYMENT";
}
}
catch(const char* msg){
    cout<<"ERROR :"<<msg<<endl;
}
}


};
int main() {
     
    customer c1;

    c1.payment(50.05);
    c1.bill(50.05);
    return 0;
}
