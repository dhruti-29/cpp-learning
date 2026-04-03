#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

// Simple class to store CSV data
class Student
{
public:
    string name;
    int age;
    double marks;

    Student(string n, int a, double m)
    {
        name = n;
        age = a;
        marks = m;
    }
};

int main()
{
    ifstream file("data.csv");

    if (!file)
    {
        cout << "File not opened\n";
        return 0;
    }

    vector<Student> students;
    string line;

    int valid = 0;
    int invalid = 0;

    while (getline(file, line))
    {
        stringstream ss(line);

        string name, ageStr, marksStr;

        try
        {
            // splitting CSV line
            getline(ss, name, ',');
            getline(ss, ageStr, ',');
            getline(ss, marksStr, ',');

            // converting values
            int age = stoi(ageStr);
            double marks = stod(marksStr);

            // storing in object
            Student s(name, age, marks);
            students.push_back(s);

            valid++;
        }
        catch (...)
        {
            cout << "Skipping invalid line: " << line << endl;
            invalid++;
        }
    }

    file.close();

    cout << "\nValid lines: " << valid << endl;
    cout << "Invalid lines: " << invalid << endl;

    cout << "\nData:\n";
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].name << " "
             << students[i].age << " "
             << students[i].marks << endl;
    }

    return 0;
}q