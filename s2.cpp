#include <iostream>
using namespace std;

class student{

    string n;
    int r;

    public:
static int count;

    student(){
     r = count;
        n = "Unknown";
    }

    student(int roll,string name){
        cout<<"roll no :"<<endl;
        cin>>r;
        cout<<"name :"<<endl;
        cin>>n;
    }

    void dispaly(){

        cout<<"*********details********"<<endl;
        cout<<"NAME :"<<n<<endl;
        cout<<"ROLL NO : "<<r<<endl;
    }

};
int student :: count = 0;
int main() {
    student s1(113,"dhruti");
    
    student s2();
    student s3(3,"drashti");

    s1.dispaly();
    s2.dispaly();
    s3.dispaly();
    return 0;
}
