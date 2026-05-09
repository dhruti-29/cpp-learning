#include <iostream>
#include<fstream>
using namespace std;

int main() {
    int a = 10 , b= 0;
    try{
        if(b==0){
            throw "division by zero !!";
        }
    }
    catch(const char*msg){
        cout<<"exception :"<<msg<<endl;
    }

    try{
        ifstream file("data.txt");
        if(!file){
            throw 404;
        }
    }

    catch(int err){
        cout<<"exception : "<<err<<endl;
    }
    return 0;
}
