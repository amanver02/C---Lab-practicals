#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Unary operator overloading: ++ (pre-increment)
    Complex operator++() {
        ++real;
        ++imag;
        return *this;
    }

    // Unary operator overloading: -- (pre-decrement)
    Complex operator--() {
        --real;
        --imag;
        return *this;
    }

    // Binary operator overloading: + (complex + complex)
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Binary operator overloading: - (complex - complex)
    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    // Display original complex numbers
    cout << "Initial complex numbers:\n";
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();

    // Unary operator overloading
    ++c1;
    cout << "\nAfter incrementing c1:\n";
    c1.display();

    --c2;
    cout << "After decrementing c2:\n";
    c2.display();

    // Binary operator overloading
    Complex c3 = c1 + c2;
    cout << "\nAfter c1 + c2:\n";
    c3.display();

    Complex c4 = c1 - c2;
    cout << "After c1 - c2:\n";
    c4.display();
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

    // Friend function declaration
    friend void swap(A&, B&);
};

// Class B
class B {
private:
    int numB;

public:
    B(int num) : numB(num) {}

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
    cout << "A: " << objA.numA << ", B: " << objB.numB << endl;

    swap(objA, objB); // Call the friend function to swap

    cout << "After Swap:\n";
    cout << "A: " << objA.numA << ", B: " << objB.numB << endl;

    return 0;
}

    return 0;
}
