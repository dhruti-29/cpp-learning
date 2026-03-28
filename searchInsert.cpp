#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,4,5};
   int target=3;
    for(int i=0;i<5;i++){
        if(a[i]==target){
             cout<<"output: "<<i<<endl;
        }
        else if(a[i]!=target){

        if(a[i]<target && a[i+1]>target){
            cout<<i+1<<endl;

        }

        }


    }
}