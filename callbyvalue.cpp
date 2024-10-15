#include <iostream>
using namespace std;

// Call by Value
void callByValue(int a) {
    a = a + 10;  // Changes the local copy of 'a'
    cout << "Inside callByValue, a = " << a << endl;
}

// Call by Reference
void callByReference(int &b) {
    b = b + 10;  // Changes the original value of 'b'
    cout << "Inside callByReference, b = " << b << endl;
}

int main() {
    int x = 20, y = 20;

    cout << "Before callByValue, x = " << x << endl;
    callByValue(x);  // Call by value, only local copy is changed
    cout << "After callByValue, x = " << x << endl;

    cout << "Before callByReference, y = " << y << endl;
    callByReference(y);  // Call by reference, original value is changed
    cout << "After callByReference, y = " << y << endl;
      cout<<"AMAN VERMA BCA III-B " <<endl;
    cout<<"Enrollment-A45304823055";


    return 0;
}
