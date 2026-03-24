#include <iostream>
using namespace std;

class p{
public:

void patteren3(int n){

   
    for(int i=0;i<n;i++){
        char c = 'A';
        for(int j=0;j<i;j++){
            cout<<c;
            c++;
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
