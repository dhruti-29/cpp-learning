#include <iostream>
using namespace std;

class person{
    protected :
    string name;
int age;



};


class student :public person{

int roll;
int mark;

public :

void setdata(string n, int a,int r,int m){
name = n;
age = a;
roll = r;
mark = m;

}

void calculateGrade(){
cout<<"************DETAILS**********"<<endl;
cout<<"NAME :"<<name<<endl;
cout<<"AGE :"<<age<<endl;
cout<<"ROLL :"<<roll<<endl;
cout<<"MARK : "<<mark<<endl;

if (mark >= 90)
            cout << "Grade: A" << endl;
        else if (mark >= 75)
            cout << "Grade: B" << endl;
        else if (mark >= 50)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: Fail" << endl;

}

};

int main() {
    
student s1;
s1.setdata("dhruti" ,18,113,99);
s1.calculateGrade();

    return 0;
}
