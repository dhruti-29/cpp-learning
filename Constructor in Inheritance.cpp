#include <iostream>
using namespace std;

 class student{

        private:
        string name;

        public:
        student(){
            cin>>name;
            cout<<name<<endl;
        }

    };
    class smart :public student{

        public :
        smart(string name){
            cout<<"smart student : " <<name;
        }
    };

int main() {
   
    //student s1;
   // s1.print();

    smart s2("dhrytiownnciej");
    //s2.sprint("dhrutvosj");
    return 0;
}
