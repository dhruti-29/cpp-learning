#include <iostream>
using namespace std;

class printer{

    public :
string  newsname;


printer(){

    cout<<"ENTER MAIN HEADLINE WORD :"<<endl;
    cin>>newsname;
}
};


class scaner{
    public :
    int totalword;
scaner(){

    cout<<"ENTER TOTAL WORD : "<<endl;
    cin>>totalword;
}



};

class news : public printer , public scaner {


    public :

    void display(){
cout<<"********DETAILS*********"<<endl;
cout<<"HEADLINE : "<<newsname<<endl;
cout<<"TOTALWORD : "<<totalword<<endl;


    }
};
int main() {
    news n1;
    n1.display();
    return 0;
}
