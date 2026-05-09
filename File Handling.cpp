#include <iostream>
#include<fstream>
using namespace std;

int main() {
    
    ofstream fout("text.txt");

    fout<<"hello file ";
    fout.close();
    return 0;
}
