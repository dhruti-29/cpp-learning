/*
Use: File ma data save / read karva
Why needed: Permanent storage mate (data lost na thay)
Main use: Save, read, update data.
*/


#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream fout;   // file ma write karva mate
    string name;
    int marks;

    // 1️⃣ File open for writing
    fout.open("student.txt");

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    // 2️⃣ Write into file
    fout << name << " " << marks << endl;

    // 3️⃣ Close file
    fout.close();

    cout << "\nData written successfully!\n";

    // 4️⃣ Read file
    ifstream fin;
    fin.open("student.txt");

    cout << "\nReading from file:\n";

    // 5️⃣ Using eof()
    while(!fin.eof()) {
        fin >> name >> marks;
        cout << "Name: " << name << " Marks: " << marks << endl;
    }

    fin.close();

    return 0;
}
