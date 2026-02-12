#include <iostream>
using namespace std;

class book{
int id ,title ,price ;
public :
book(int i , int t ,int p){
id =i;
title = t;
price = p;




}
book(book &b){
    id = b.id;
    title =b.title;
    price =b.price;
}

void show(){
cout<<"************DETAILS*************"<<endl;
    cout<<"id :"<<id<<endl;
cout<<"title : "<<title<<endl;
cout<<"price : "<<price<<endl;

}
};

int main() {
    book b1(10,34,45);
    book b2 = b1;

    b1.show();
    b2.show();

    return 0;
}
