#include <iostream>
using namespace std;

class bank{
private: 
int num;
string name;
double blanace;
double dipomoney;
double withmoney;
public :
bank(){

    cout<<"enter details "<<endl;
    cout<<"enter name :"<<endl;
    cin>>name;

    cout<<"enter bank num :"<<endl;
    cin>>num;

    cout<<"enter blance :"<<endl;
    cin>>blanace;

    if(blanace<0){
        cout<<"not valid"<<endl;

    }

}

void depositemoney(){

    cout<<"enter money value for deposite :"<<endl;
    cin>>dipomoney;

    blanace= dipomoney + blanace;
}

void withdraw(){
    cout<<"enter money value for withdraw :"<<endl;
    cin>>withmoney;
    if(withmoney<=blanace){

        blanace= blanace - withmoney;
        blanace = withmoney + blanace;
    }
    else{
        cout<<"ERROR"<<endl;

    }
}

void display(){
    cout<<"******_************_***********_**** details ********_****_**_*_*_*_*_*_*_*_*_*_*_*"<<endl;

    cout<<"name :"<<name<<endl;
    cout<<"bank account number :" <<num<<endl;
    cout<<"balance :"<<blanace<<endl;
  
}

};
int main() {
    bank b[2];

    for(int i =0;i<2;i++){

        b[i].depositemoney();
        b[i].withdraw();
        b[i].display();

    }


    return 0;
}
