#include <iostream>
using namespace std;

class Person {
public:
    string name;

    Person() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Person Constructor Called" << endl;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
    }

    ~Person() {
        cout << "Person Destructor Called" << endl;
    }
};

// Derived class Student
class Student : public Person {
public:
    int id;

    Student() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Student Constructor Called" << endl;
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        showPerson();
        cout << "ID: " << id << endl;
    }

    ~Student() {
        cout << "Student Destructor Called" << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
public:
    string dept;

    Teacher() {
        cout << "Enter Department: ";
        cin >> dept;
        cout << "Teacher Constructor Called" << endl;
    }

    void display() {
        cout << "\n--- Teacher Details ---" << endl;
        showPerson();
        cout << "Department: " << dept << endl;
    }

    ~Teacher() {
        cout << "Teacher Destructor Called" << endl;
    }
};

int main() {

    Student s1;
    s1.display();

    Teacher t1;
    t1.display();

    return 0;
}