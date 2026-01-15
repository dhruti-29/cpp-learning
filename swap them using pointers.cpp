#include<iostream>
using namespace std;

void swap(int *a,int *b);
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x=9,y=80;
    swap(&x,&y);
    cout<<"swaping avlue : "<<x<<"and "<<y;
    
}