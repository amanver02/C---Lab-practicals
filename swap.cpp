#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

// Class A
class A {
private:
    int numA;

public:
    A(int num) : numA(num) {}

    // Getter function for numA
    int getNumA() const {
        return numA;
    }

    // Friend function declaration
    friend void swap(A&, B&);
};

// Class B
class B {
private:
    int numB;

public:
    B(int num) : numB(num) {}

    // Getter function for numB
    int getNumB() const {
        return numB;
    }

    // Friend function declaration
    friend void swap(A&, B&);
};

// Friend function to swap numbers
void swap(A& a, B& b) {
    int temp = a.numA;
    a.numA = b.numB;
    b.numB = temp;
}

int main() {
    A objA(10); // Create an object of class A with numA = 10
    B objB(20); // Create an object of class B with numB = 20

    cout << "Before Swap:\n";
    cout << "A: " << objA.getNumA() << ", B: " << objB.getNumB() << endl;

    swap(objA, objB); // Call the friend function to swap

    cout << "After Swap:\n";
    cout << "A: " << objA.getNumA() << ", B: " << objB.getNumB() << endl;
   cout<<"AMAN VERMA BCA III-B " <<endl;
    cout<<"Enrollment-A45304823055";
    return 0;
}
