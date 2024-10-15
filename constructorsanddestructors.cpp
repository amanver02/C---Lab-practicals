#include <iostream>
using namespace std;

class Shape {
private:
    float radius, length, width;

public:
    // Constructor for rectangle
    Shape(float l, float w) : length(l), width(w), radius(0) {
        cout << "Rectangle created with length = " << length << " and width = " << width << endl;
    }

    // Constructor for circle
    Shape(float r) : radius(r), length(0), width(0) {
        cout << "Circle created with radius = " << radius << endl;
    }

    // Function to calculate perimeter of rectangle
    float perimeterRectangle() {
        return 2 * (length + width);
    }

    // Function to calculate perimeter of circle
    float perimeterCircle() {
        return 2 * 3.1416 * radius;
    }

    // Destructor
    ~Shape() {
        cout << "Shape object destroyed." << endl;
    }
};

int main() {
    // Rectangle object
    Shape rectangle(5.0, 3.0);
    cout << "Perimeter of rectangle: " << rectangle.perimeterRectangle() << endl;

    // Circle object
    Shape circle(7.0);
    cout << "Perimeter of circle: " << circle.perimeterCircle() << endl;
    cout<<"AMAN VERMA BCA III-B " <<endl;
    cout<<"Enrollment-A45304823055";
    return 0;
}
