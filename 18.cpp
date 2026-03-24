#include <iostream>
using namespace std;
/* 
E 
D E 
C D E 
B C D E 
A B C D E 

*/
class p{
public:

void patteren3(int n){

    for(int i=0;i<n;i++){
        //char c='E';
        for(char ch ='E' - i; ch <= 'E' ; ch++){
            cout<<ch <<" ";
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
