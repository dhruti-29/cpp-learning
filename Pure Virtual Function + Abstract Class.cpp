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

}


class bike : virtual public vehicle{
string name;

public :
virtual void display(){
cout<<"enter name :"<<endl;
cin>>name;

}

}
int main() {
    
    return 0;
}
