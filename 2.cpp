#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

// Student Class
class Student {
public:
    string name;
    int maths;
    int science;
    int english;

    Student(string name, int maths, int science, int english) {
        this->name = name;
        this->maths = maths;
        this->science = science;
        this->english = english;
    }
};

int main() {
    ifstream file("students.csv");

    if (!file.is_open()) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    vector<Student> students;
    string line;
    int validLines = 0;
    int invalidLines = 0;

    // Skip header line
    getline(file, line);

    while (getline(file, line)) {
        stringstream ss(line);
        string name, mathsStr, scienceStr, englishStr;

        try {
            // Read CSV fields
            getline(ss, name, ',');
            getline(ss, mathsStr, ',');
            getline(ss, scienceStr, ',');
            getline(ss, englishStr, ',');

            // Convert to integers (can throw exception)
            int maths = stoi(mathsStr);
            int science = stoi(scienceStr);
            int english = stoi(englishStr);

            // Create object and store in vector
            Student s(name, maths, science, english);
            students.push_back(s);

            validLines++;

        } catch (exception &e) {
            cout << "Invalid data skipped: " << line << endl;
            invalidLines++;
        }
    }

    file.close();

    // ✅ Output summary
    cout << "\n===== Summary =====" << endl;
    cout << "Valid Records: " << validLines << endl;
    cout << "Invalid Records: " << invalidLines << endl;

    // Optional: print all valid students
    cout << "\n===== Student Data =====" << endl;
    for (auto &s : students) {
        cout << s.name << " | "
             << s.maths << " | "
             << s.science << " | "
             << s.english << endl;
    }

    return 0;
}