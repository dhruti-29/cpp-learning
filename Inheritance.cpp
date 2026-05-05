#include <iostream>
using namespace std;

 class student{

        private:
        string name;

        public:
        void print(){
            cin>>name;
            cout<<name<<endl;
        }

    };
    class smart :public student{

        public :
        void sprint(string name){
            cout<<"smart student : " <<name;
        }
    };

int main() {
   
    student s1;
    s1.print();

    smart s2;
    s2.sprint("dhrutvosj");
    return 0;
}
