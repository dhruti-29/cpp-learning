#include <iostream>
using namespace std;

class p{
public:

void patteren3(int n){

    for(int i=n;i>1;i--){
        for(int j= 1;j<i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
};

int main() {
    p p3;
    p3.patteren3(6);
    return 0;
}
