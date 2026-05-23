#include <iostream>
using namespace std;

class p{
public:

void patteren3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
};

int main() {
    p p2;
    p2.patteren3(5);
    return 0;
}
