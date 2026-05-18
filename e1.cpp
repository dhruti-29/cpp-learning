#include <iostream>
using namespace std;

class uni{

    public :
int roll;
float cgpa;
int sem;
static string name ;

void data(int r ,float c){
    roll = r;
    cgpa = c;
}

uni(){
sem = 1;
}
};

class ugstudent {

    public:
    virtual void result(){
        cout<<"this parts display UGstudent result"<<endl;
    }
};

class pgstudent : public ugstudent{
    public:
void result(){
    cout<<"this part is for PGstudent"<<endl;
}
};
 string uni ::  name = "charusat university";


int main() {
    uni u1;
    u1.data(113,8.37);

    ugstudent *a;
    pgstudent b;
    a = &b;
 a->result();

cout<<"UNIVERSITY NAME :"<<uni::name<<endl;
cout<<"ROLL NO :"<<u1.roll<<endl;
cout<<"CGPA : "<<u1.cgpa<<endl;
cout<<"SEMESTR :"<<u1.sem<<endl;
    return 0;
}
