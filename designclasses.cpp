#include <iostream>
#include <string>
using namespace std;

// Base Class: Student
class Student {
protected:
    int rollNo;
    string name;

public:
    void inputDetails() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
    }

    void displayDetails() {
        cout << "Roll No: " << rollNo << "\nName: " << name << endl;
    }
};

// Derived Class: Exam
class Exam : public Student {
protected:
    float marks[6];

public:
    void inputMarks() {
        cout << "Enter marks for 6 subjects:\n";
        for (int i = 0; i < 6; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        cout << "Marks:\n";
        for (int i = 0; i < 6; i++) {
            cout << "Subject " << (i + 1) << ": " << marks[i] << endl;
        }
    }
};

// Derived Class: Result
class Result : public Exam {
public:
    void displayTotalMarks() {
        float total = 0;
        for (float mark : marks) total += mark;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result student;

    student.inputDetails();
    student.inputMarks();
    student.displayDetails();
    student.displayMarks();
    student.displayTotalMarks();
     cout<<"AMAN VERMA BCA III-B " <<endl;
    cout<<"Enrollment-A45304823055";
    return 0;
}
