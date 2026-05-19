#include <iostream>
using namespace std;

class man{
    private:
    string name ;
    int id;
public:

 man(){
    cout<<"enter your details : "<<endl;
    cout<<"enter name :"<<endl;
    cin>>name;

    cout<<"enter id :"<<endl;
    cin>>id;

 
}

template<class T>
 T calculation(T salary){
    return salary * 0.100;
 }
 ~man(){
    cout<<"this part is for memory cleanup"<<endl;
}
};

int main() {

   man s1;
cout << "Bonus: " << s1.calculation(2000) << endl;

cout << "Bonus: " << s1.calculation(2500.50f) << endl;
    return 0;
}
