#include <iostream>
using namespace std;

void merge(int a[],int asize ,int b[] ,int bsize){

    int c[1000];
    int n = asize + bsize;

    for(int i=0;i<asize;i++){
       c[i] = a[i]; 

    }
    for(int i=0;i<bsize;i++){
       c[i + asize] = b[i]; 

    }
printf("final matrix :\n");
    for(int i=0;i<n;i++){
        printf("%d ",c[i]);
    }

    for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        if(c[j]>c[j+1]){
           int temp=c[j];
            c[j]=c[j+1];
            c[j+1]=temp;
        }
    }
}
printf("ANSWER : \n");
for(int i=0;i<n;i++){
    printf("%d ",c[i]);
}
}
int main() {
    
    int arr[3]={1,4,6};
    int brr[4]={4,8,9,67};

    merge(arr,3,brr,4);

    return 0;
}
