#include <iostream>
#include<fstream>
using namespace std;

int main() {
    
    ofstream fout("data.txt");

    fout<<"dhruti 100"<<endl;
    fout<<"drashtii 99"<<endl;
    fout.close();

    ifstream fin("data.txt");
    string name;
    int marks;

    while(fin >> name >> marks){
        cout<<name<<" "<<marks<<endl;
    }
    
    return 0;
}
