#include <iostream>
#include<string>
using namespace std;

void lowlevelfunction() {
try {
throw runtime_error("An error occurred in lowLevelFunction");
} catch (const runtime_error& e) {
cout << "Low-level function caught exception: " << e.what() << endl;
cout << "Logging the error..." << endl;
throw; // Rethrow the exception
}
}
void highlevelfunction() {
try {
lowlevelfunction();
} catch (const runtime_error& e) {
cout << "High-level function caught exception: " << e.what() << endl;
cout << "Taking corrective action..." << endl;
throw;
}
}


int main() {
    try{
       highlevelfunction();
    }

    catch (const exception &e){
        cout<<"main caught exeception :"<<e.what()<<endl;
    }

    catch(...){
        cout<<"main function caught an unkown exception"<<endl;
    }
    return 0;
}
