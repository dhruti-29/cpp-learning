#include <iostream>
using namespace std;
class p{
public:

void patteren2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
};
int main() {
    
    p p1;
    p1.patteren2(5);
    return 0;
}
