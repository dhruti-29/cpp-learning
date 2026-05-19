#include <iostream>
using namespace std;

class game{

public:
virtual void display() =0;

};

class cricket : public game{

public:
void display(){
    cout<<"CRICKET GAME START "<<endl;

}
};

class racing : public game{
public:
void display(){
    cout<<"RACING GAME START"<<endl;
}

};

inline int score(int a,int b){
    return a+b;
}
int main() {

    game *g1;
    cricket c1;
    
    g1 = &c1;
    c1.display();

    cout<<"final score is :"<<score(30,70)<<endl;
    return 0;
}
