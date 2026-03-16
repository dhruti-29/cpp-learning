#include <iostream>
using namespace std;

class student{
int roll;
float marks;
string name;

public:
student(){
cout<<"enter details"<<endl;
cout<<"enter roll number "<<endl;
cin>>roll;

cout<<"enter marks :"<<endl;
cin>>marks;

cout<<"enter name :"<<endl;
cin>>name;

}

void display(){
cout<<"*******Details**********"<<endl;
cout<<"roll no : "<<roll<<endl;
cout<<"marks : "<<marks<<endl;
cout<<"name: "<<name<<endl;

cout<<"grade  :";


if(marks>=90){
  cout<<"A"<<endl;
}
else if(marks<90 && marks>=75){
   cout<<"B"<<endl;
}

else if(marks<75 && marks>=40){
    cout<<"C"<<endl;
}
else{
    cout<<"FAIL"<<endl;
}

}

};
int main() {
    
    student s[2];

    for(int i=0;i<2;i++){
        s[i].display();

    }

    for(int i=0;i<2;i++){
        s[i].grade();
        
    }
    return 0;
}
