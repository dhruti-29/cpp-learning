#include <iostream>
using namespace std;

class student{
private:
int num;

public:
student(){
    cout<<"constructor"<<endl;
}

~student(){
    cout<<"destructor called"<<endl;
}

};

int main() {
    student s1;

    return 0;
}
