#include <iostream>
using namespace std;

class employee{

int id;
string name;
double salary;


public:

employee(){

    cout<<"enter details "<<endl;

    cout<<"enter id :"<<endl;
    cin>>id;

    cout<<"enter name : "<<endl;
    cin>>name;

    cout<<"enter salary :"<<endl;
    cin>>salary;

}

void dispaly(){

    cout<<"******details******"<<endl;
    cout<<"id :"<<id<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"salary : "<<salary<<endl;

}

void supadate(){
    cout<<"how many salray upadate :"<<endl;
    cin>>updates;
 salary =  updates + salary ;

 cout<<"upadate salary :"<<salary<<endl;


}

};


int main(){

    employee e[2];

    for(int i=0;i<2;i++){
        e[i].dispaly();
        e[i].supadate();
    }
 

}
