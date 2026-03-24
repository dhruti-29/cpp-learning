#include <iostream>
using namespace std;
class p{
public:

void patteren2(int n){
 
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
cout<<a<<" " ;
a++;
        }
        cout<<endl;
    }


}
};
int main() {
    
    p p1;
    p1.patteren2(6);
    return 0;
}
