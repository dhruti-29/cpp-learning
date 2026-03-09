
#include <iostream>
using namespace std;

class student{

int rollno;
string name;
int marks;

public :

void setdata(){

cout<<"enter details "<<endl;

cout<<"enter roll no :"<<endl;
cin>>rollno;

cout<<"enter name :"<<endl;
cin>>name;

cout<<"enter marks :"<<endl;
cin>>marks;



}

void printdata(){

cout<<"*********************"<<endl;
cout<<"name : "<<name<<endl;
cout<<"roll no : "<<rollno<<endl;
cout<<"marks : "<<marks<<endl;

}

};




int main() {
    
student s1,s2;

s1.setdata();
s2.setdata();

s1.printdata();
s2.printdata();

    return 0;
}
