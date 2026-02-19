/*
Use: Multiple objects ne pointer thi manage karva
Why needed: Dynamic memory + large data handle karva easy
Main use: Many objects efficiently store & access.
*/


#include <iostream>
using namespace std;

class book{
int price;
string name;
public:

void getdata(){

    cout<<"ENTER BOOK NAME : "<<endl;
    cin>>name;

    cout<<"ENTER PRICE :"<<endl;
    cin>>price;

}

void display(){
cout<<"**********DETAILS************"<<endl;
    cout<<"NAME : "<<name<<endl;
    cout<<"PRICE : "<<price<<endl;

}
};


int main() {
    int num;
    cout<<"TOTAL BOOKS : "<<endl;
    cin>>num;


    book *ptr = new book[num];

    for(int i=0;i<num;i++){

       ptr->getdata();

    }
for(int i=0;i<num;i++){

 ptr->display();
}
    //delete ptr[]; 
    //this is wrong 
delete[] ptr;
    return 0;
}
