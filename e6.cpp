#include <iostream>
using namespace std;

class library{
int id;
string name;
    public:
    static string namelib;

    library(){
        id = 0;
        name = "abc";
    }

    library(int i,string n){
        id = i;
        name = n;
    }
    library(library &l){
        id = l.id;
        name = l.name;
    }

    void display(){
        cout<<"ALL DETAILS"<<endl;
        cout<<"BOOK ID :"<<id<<endl;
        cout<<"BOOK NAME :"<<namelib<<endl;
        cout<<"library name :"<<name<<endl;
        }
};

string library :: namelib ="charusat library";

int main() {

    library l1;
    
    l1.display();
    //l1.display();
library l2 = l1;

l2.display();

    
    return 0;
}
