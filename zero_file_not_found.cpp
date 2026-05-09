
//error code

#include <iostream>
#include<fstream>
using namespace std;

int main() {
    
    try{

        int a =10 ,b =0;
        if(b==0){
            throw "division by zero error !";
            cout<<"result :"<<a/b<<endl;
        }
    }

    ifstream file("data.txt");
    if(!file){
        throw 404;
        cout<<"file opened !!"<<endl;
    }

    catch(const char* msg){
        cout<<"exception : "<<msg<<endl;
    }

    catch(int errorcode){
        cout<<"exception : FILE NOT FOUND"<<errorcode<<endl;
    }
    return 0;
}
