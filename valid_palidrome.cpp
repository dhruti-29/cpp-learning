#include <iostream>
using namespace std;

void pallidrome(string s){

    int l = s.length();
    for(int i=0;i<l;i++){

        if(s[i]!=' ' && (s[i]>A && s[i]<Z) && (s[i]>a && s[i]<z)){
            cout<<s[i];
        }
    }


}
int main() {
    pallidrome("a man is dhruti");
    
    return 0;
}
