#include <iostream>
using namespace std;

class marks{

public:
int mark[5];

void input(){
    for(int i=0;i<5;i++){
        cin>>mark[i];
    }
}
void show(){
    for(int i=0;i<5;i++){
        cout<<"the mark is :"<<mark[i]<<endl;
    }
}
void total(){
    int total=0;
    for(int i=0;i<5;i++){
    total=total+mark[i];

    }
    cout<<"the total sum is : "<<total;
}
};
int main() {
    marks m1;
    m1.input();
    m1.show();
    m1.total();
    
    return 0;
}
