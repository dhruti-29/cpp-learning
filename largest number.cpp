#include<iostream>
using namespace std;

int main(){
    int a[3]={3,5,8};
    int max = a[0];
    for(int i=1;i<3;i++){       
        if(a[i]>max){
            max = a[i];
        }
    }   
}