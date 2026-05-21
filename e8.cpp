#include <iostream>
#include <fstream>

using namespace std;

class Person
{
protected:
    int id;
    string name;

public:
    void getPersonData()
    {
        cout << "Enter Doctor ID: ";
        cin >> id;

        cout << "Enter Doctor Name: ";
        cin >> name;
    }
};

class Doctor : public Person
{
private:
    float salary;

public:
    void getDoctorData()
    {
        getPersonData();

        cout << "Enter Doctor Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nDOCTOR DETAILS" << endl;
        cout << "Doctor ID: " << id << endl;
        cout << "Doctor Name: " << name << endl;
        cout << "Doctor Salary: " << salary << endl;
    }

    void saveFile()
    {
        ofstream fout("hospital.txt", ios::app);

        fout << "Doctor ID: " << id << endl;
        fout << "Doctor Name: " << name << endl;
        fout << "Doctor Salary: " << salary << endl;
        fout << "----------------------" << endl;

        fout.close();

        cout << "Record Stored Successfully!" << endl;
    }
};

int main()
{
    Doctor d1;

    d1.getDoctorData();

    d1.display();

    d1.saveFile();

    return 0;
}