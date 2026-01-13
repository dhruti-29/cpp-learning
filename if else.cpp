#include<iostream>
using namespace std;


//⁠Write a program to input marks of 3 subjects and 
// calculate percentage and grade (A/B/C/F).


int main(){

    int num1,num2,num3;
    cout<<"enter marks of 3 subjects :"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;

    int total = num1 + num2 + num3;
    float avg = total / 3.0;

    cout<<"the avrage is : "<<avg<<endl;


    if(avg>=90){
        cout<<"A";
    }
    else if(avg>=80){
        cout<<"B";
    }
    else{
        cout<<"c";
    }

//⁠Write a program to find the largest of 3 
// numbers using nested if

// 3 5 8 
/* pela check karvanu k 3 and 5 ma kon motu chhe 
jo  3 mota hot to pela if ma jai condition but 
5 mota chhe atle else ma gai condition pachhi  
else ni andar ---- if ma check tahy have eto fix chhe ke 
pela 2 num ma kon motu chhe e pavhhi check thase if ma k
5 and 8 ma kon motu chhe 8 mota chhe atle num1 and num2 ma 
num2 moto chhe and num2 and num3 ma num3 moto chhe 
to finaly num3  karta num1 nano j hoi !!! */ 
if(num1>=num2){
    if(num1>=num3){
        cout<<"largest is : "<<num1<<endl;
    }
    else{
        cout<<"largest is : "<<num3<<endl;
    }
}
else{
    if(num2>=num3){
        cout<<"largest is : "<<num2<<endl;
    }
    else{
        cout<<"largest is : "<<num3<<endl;  
}

}

}