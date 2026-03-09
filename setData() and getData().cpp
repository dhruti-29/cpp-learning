#include <iostream>
using namespace std;

class employee{
int id;
int salary;
public:
void setdata(){

    cout<<"enter details "<<endl;
    cout<<"enter id :"<<endl;
    cin>>id;

    cout<<"enter salary :"<<endl;
    cin>>salary;

}

 void getdata(){

    cout<<"id :"<<id<<endl;
    cout<<"salary : "<<salary<<endl;

}

};
int main() {
    
employee e1;
e1.setdata();
e1.getdata();


    return 0;
}
