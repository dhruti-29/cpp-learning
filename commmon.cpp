#include <iostream>
using namespace std;

class wallet{
    string name;
int id;
float blance;
float loadm;
float tm;

public :

wallet(){

    cout<<"ENTER YOUR DETAIS"<<endl;

cout<<"ENTER NAME : "<<endl;
cin>>name;

cout<<"ENTER ID :"<<endl;
cin>>id;

cout<<"ENTER BLANCE :"<<endl;
cin>>blance;
if(blance<0){
    cout<<"not valid value "<<endl;
}


}

void loadmoney(){
cout<<"how much money you want to load : "<<endl;
cin>>loadm;

cout<<"NOW your blance is :"<<loadm + blance<<endl;

}

void transfer_money(wallet &w){

cout<<"ENTER TRANSFER MONEY :"<<endl;
cin>>tm;

if(tm<blance)
{
cout<<"TRANSFER SUCCSEFULLY !! "<<endl;
blance = blance - tm;
w.blance = blance + tm;

}
}

 void display(){

    cout<<"*************DETAILS******************"<<endl;
    cout<<"NAME : "<<name<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"BALNCE : "<<blance<<endl;
    


 }

};
int main() {
    wallet w1,w2;

    w1.loadmoney();
    w2.loadmoney();

    w1.transfer_money(w2);
  
    w1.display();
    w2.display();


    return 0;
}
