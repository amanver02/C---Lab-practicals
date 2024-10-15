#include <iostream>
using namespace std;

class Area {
public:
    // Function to calculate area of a circle
    float AREA(float radius) {
        return 3.1416f * radius * radius; // πr²
    }

    // Function to calculate area of a rectangle
    float AREA(float length, float width) {
        return length * width; // l * w
    }

    // Function to calculate area of a triangle
    float AREA(float base, float height, bool isTriangle) {
        return 0.5f * base * height; // (1/2) * base * height
    }
};

int main() {
    Area areaCalculator;

    // Calculate area of a circle
    float radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << areaCalculator.AREA(radius) << endl;
     cout<<"AMAN VERMA BCA III-B " <<endl;
    cout<<"Enrollment-A45304823055";
    // Calculate area of a rectangle
    float length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << areaCalculator.AREA(length, width) << endl;

    // Calculate area of a triangle
    float base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << areaCalculator.AREA(base, height, true) << endl;
     cout<<"AMAN VERMA BCA III-B " <<endl;
    cout<<"Enrollment-A45304823055";
    return 0;
}
