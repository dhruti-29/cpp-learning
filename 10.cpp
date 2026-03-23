#include <iostream>
using namespace std;
/*

*
**
***
****
*****
****
***
**
*


*/
class p{
public:

void patteren3(int n){
   

for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n;i>0;i--){
    for(int j=0;j<i;j++){
        cout<<"*";
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
