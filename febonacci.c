#include<stdio.h>
int main(){
int i,febonacci,a,b,num;

printf("Enter your number: ");
scanf("%d",&num);

a=0;
b=1;

for(i=1;i<=num;i++){
        printf("%d ",a);


      febonacci=a+b;
      a=b;
      b=febonacci;
}










}