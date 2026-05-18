#include<iostream>
using namespace std;

class acc{
    private:
    int accno;
    double balance;

    public:
    void setdata(int a, double b){
        accno=a;
        balance=b;
    }

    void getdata(){
        cout<<"Account number: "<<accno<<endl;
        cout<<"balance: "<<balance<<endl;
    }

};

class savingacc: public acc{

    public:
    savingacc(){
    cout<<"Saving account is called"<<endl;
    }
};

class curracc: public acc{
    public:
   curracc(){
    cout<<"Curr acc is called "<<endl;
   }

   void withdraw(double amt,double balance){
    try{
    if(amt>balance){
         throw "Error Balance";
    }
}
    catch(const char* msg){
    cout<<"Error: "<<msg<<endl;
}
   }

};


int main(){
    acc a1;
    savingacc s1;
    curracc c1;

    a1.setdata(12345,50000);
    a1.getdata();

    c1.withdraw(100000,50000);

}