#include <iostream>
using namespace std;

class number(){

    public :
    string name;
    int roll;
    int mark[3]={20,70,50};

    void setdata(){
        cin>>name;
        roll = 3;

    }
    private:

    void calcluation(){
        for(int i=0;i<3;i++){

            int sum = mark[i];
        }
    }

    public :
    calcluation();
    void result(){
   cout<<"the mark is : "<<sum;    
    }
};
int main() {
    
    return 0;
}
