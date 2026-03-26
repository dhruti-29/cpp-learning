#include <iostream>
using namespace std;

class p{
public:

void patteren3(int n){

    for(int i=n;i>0;i--){
        for(int j= 0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
};

int main() {
    p p3;
    p3.patteren3(5);
    return 0;
}
