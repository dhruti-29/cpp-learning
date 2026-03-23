#include <iostream>
using namespace std;
/* 
    


*/
class p{
public:

void patteren3(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2 ==0){
cout<<"1";
            }
            
            if((i+j)%2 !=0){
cout<<"0";
            }
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
