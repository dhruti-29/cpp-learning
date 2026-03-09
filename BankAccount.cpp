#include <iostream>
using namespace std;

class bank{

    int anum;
    int blance;

    public :

    void setdata(){

cout<<"enter details"<<endl;

cout<<"enter account Number :"<<endl;
cin>>anum;

cout<<"enter balance : "<<endl;
cin>>blance;

    }

    void getdata(){
cout<<"**************"<<endl;
cout<<"accountNumber :"<<anum<<endl;
cout<<"balance :"<<blance<<endl;
 }

};
int main() {
    
bank b1;
b1.setdata();
b1.getdata();

    return 0;
}
