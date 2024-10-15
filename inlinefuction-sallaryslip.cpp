#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char name[64];
    int age;
    char address[64];
    float basicSalary, hra, otherAllowances, totalSalary;

public:
    // Constructor to initialize the person object
    Person(const char* n, int a, const char* addr, float basic, float hraVal, float other) {
        strncpy(name, n, 64);
        age = a;
        strncpy(address, addr, 64);
        basicSalary = basic;
        hra = hraVal;
        otherAllowances = other;
        totalSalary = basicSalary + hra + otherAllowances;
    }

    // Inline function to get the age of a person
    inline int getAge() {
        return age;
    }

    // Inline function to display salary slip
    inline void displaySalarySlip() {
        cout << "Salary Slip for " << name << ":\n";
        cout << "Address: " << address << "\n";
        cout << "Basic Salary: " << basicSalary << "\n";
        cout << "HRA: " << hra << "\n";
        cout << "Other Allowances: " << otherAllowances << "\n";
        cout << "Total Salary: " << totalSalary << "\n";
    }

    // Function to find youngest person
    static inline void findYoungest(Person persons[], int size) {
        int minAge = persons[0].getAge();
        int index = 0;
        for (int i = 1; i < size; i++) {
            if (persons[i].getAge() < minAge) {
                minAge = persons[i].getAge();
                index = i;
            }
        }
        cout << "Youngest person is " << persons[index].name << " with age " << minAge << endl;
    }

    // Function to find eldest person
    static inline void findEldest(Person persons[], int size) {
        int maxAge = persons[0].getAge();
        int index = 0;
        for (int i = 1; i < size; i++) {
            if (persons[i].getAge() > maxAge) {
                maxAge = persons[i].getAge();
                index = i;
            }
        }
        cout << "Eldest person is " << persons[index].name << " with age " << maxAge << endl;
    }
};

int main() {
    // Array of 10 Person objects
    Person persons[10] = {
        Person("Alice", 25, "123 Street A", 30000, 5000, 2000),
        Person("Bob", 40, "456 Street B", 40000, 7000, 3000),
        Person("Charlie", 29, "789 Street C", 35000, 6000, 2500),
        Person("David", 50, "1010 Street D", 45000, 8000, 4000),
        Person("Eva", 22, "1112 Street E", 32000, 5000, 2200),
        Person("Frank", 55, "1314 Street F", 50000, 9000, 5000),
        Person("Grace", 31, "1516 Street G", 36000, 6200, 2800),
        Person("Hannah", 45, "1718 Street H", 42000, 7000, 3500),
        Person("Ian", 35, "1920 Street I", 37000, 6300, 3000),
        Person("Jack", 28, "2122 Street J", 34000, 5200, 2400)
    };

    // Find the youngest and eldest person
    Person::findYoungest(persons, 10);
    Person::findEldest(persons, 10);

    // Display salary slip for a person (example: display for the first person)
    cout << "\nDisplaying Salary Slip:\n";
    persons[0].displaySalarySlip();
    cout<<"AMAN VERMA BCA III-B " <<endl;
    cout<<"Enrollment-A45304823055";
    return 0;
}
