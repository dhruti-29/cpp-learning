#include <iostream>
using namespace std;
class employee{
    public:
static int count ;
int id = 0;
employee(){
    count++;
}

static void countt(){

    cout<<"ther id no is : "<<count;


}

};

int employee :: count =0;
int main() {

employee e1,e2;
employee::countt();

    
    return 0;
}
