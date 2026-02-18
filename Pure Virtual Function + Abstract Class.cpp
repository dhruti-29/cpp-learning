/*

Use: Mandatory function implementation in derived class
Why needed: Common rule define karva
Main use: Blueprint class (object create nathi thato)
*/


#include <iostream>
using namespace std;

class vehicle{
int model;
public:

virtual void start(){

    cout<<"there are vehicle section"<<endl;
    cout<<"enter model : "<<endl;
    cin>>model;
}
};

class car : virtual public vehicle{

string name;

public :
virtual void dispaly(){
    cout<<"enter name :"<<endl;
    cin>>name;
}

};


class bike : virtual public vehicle{
string name;

public :
virtual void dispaly(){
cout<<"enter name :"<<endl;
cin>>name;

}

};
int main() {
    car c;
    bike b;

    c.start();
    c.dispaly();

    b.start();
    b.dispaly();

    return 0;
}
