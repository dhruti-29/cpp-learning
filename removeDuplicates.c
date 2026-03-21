#include <stdio.h>

int main() {
    

    int a[]={1,5,6,1,7};

    for(int i= 0;i<5;i++){

        for(int j =i+1;j<5;j++){

            if(a[i]==a[j]){
                a[i] = -1;

            }
        }
        if(a[i] != -1){
    printf("  %d , ",a[i]);
    }
    }

    printf("end");
    
    return 0;
}