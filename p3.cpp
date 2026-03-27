#include <iostream>
using namespace std;
/* 
    *
   ***
  *****
 *******
********* */
class p{
public:

void patteren3(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<" * ";
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
