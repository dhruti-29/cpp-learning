#include <iostream>
using namespace std;

class library{

int id;
string name;
string author;

bool available;

public:

library(){
cout<<"enter details"<<endl;
cout<<"enter id :"<<endl;
cin>>id;

cout<<"enter name :"<<endl;
cin>>name;

cout<<"enter author name :"<<endl;
cin>>author;

available = true;
}
void borrowbook(){

if(available){
    available = false;
    cout<<"Book borrowed successfully"<<endl;
}
else{
    cout<<"Book not available"<<endl;
}

}

void display(){
cout<<" id :"<<id<<endl;


cout<<" name :"<<name<<endl;

cout<<" author name :"<<author<<endl;

}

void returnBook(){

available = true;
cout<<"Book returned"<<endl;

}

void searchBook(string t){
string t;
cout<<"Enter book name to search: ";
cin>>t;
if(name == t){
cout<<"Book found"<<endl;
display();
}

}
};
int main() {
    library  l[3];
    for(int i=0;i<3;i++){
l[i].borrowbook();
l[i].searchBook();
l[i].returnBook();
l[i].display();

    }
    return 0;
}
