#include <iostream>
using namespace std;

class student{
    protected :
int roll;

public :
student(){

    cout<<"ENTER ROLL NUMBER :"<<endl;
    cin>>roll;
    
}
};

class marks : public student {
public :
    int mark;
 marks(){

    cout<<"ENTER MARKS :"<<endl;
    cin>>mark;
   }

};

class grade : public marks{

public :

void display(){


    cout<<"**********DETAILS************"<<endl;
    cout<<"ROLL : "<<roll<<endl;
    cout<<"MARK : "<<mark<<endl;
    

if (mark >= 90){

    cout <<"Grade: A" << endl;
}
        else if (mark >= 75){

            cout <<"Grade: B" << endl;
        }
        else if (mark >= 50){

            cout <<"Grade: C" << endl;
        }
        else{

            cout <<"Grade: Fail" << endl;
        }

    }
};
int main() {
    
    grade g1;
    g1.display();
    return 0;
}
