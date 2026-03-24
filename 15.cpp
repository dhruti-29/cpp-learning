#include <iostream>
using namespace std;
/* 
A B C D E 
A B C D 
A B C 
A B 
A 
*/
class p{
public:

void patteren3(int n){


    for(int i=n;i>0;i--){
    char c = 'A';
    for(int j=0;j<i;j++){
cout<<c<<" ";
c++;
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
