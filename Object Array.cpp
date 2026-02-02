#include <iostream>
using namespace std;

class book{

    int id;
    int price;
    string name;
    public:
    void setdata(){

        cout<<"enter name :";
        cin>>name;
cout<<"enter id :";
cin>>id;
cout<<"enter price : ";
cin>>price;
    }

    void getdata(){

        cout<<"\n ***********************"<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Id no :"<<id<<endl;
        cout<<"Price : "<<price<<endl;

    }
};

int main() {
    book b1[10];
for(int i=0;i<10;i++){
b[i].setdata();
    b[i].getdata();
}
    
    return 0;
}
