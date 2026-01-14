#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter number :"<<endl;
    cin>>num;

    if(num>0){
        cout<<"positive"<<endl;

    }
    else if(num<0){
        cout<<"negative"<<endl;
    }
    else {
        cout<<"zero"<<endl;
    }

    //Write a program to input a 3-digit number 
    // and print the sum of its digits. (Use arithmetic 
    // operators)

    int num1;
    cout << "Enter a 3-digit number: ";
    cin >> num1;

   
    //int d1 = num1 / 100;        // first digit
    //int d2 = (num1 / 10) % 10;  // second digit
    //int d3 = num1 % 10;         // third digit

    int sum = 0;
while(num1>0){
    int digit = num1%10;
    sum = sum 
    + digit;
    num1 = num1 / 10;
}
    cout<<"sum of three number is : "<<sum<<endl;
}
