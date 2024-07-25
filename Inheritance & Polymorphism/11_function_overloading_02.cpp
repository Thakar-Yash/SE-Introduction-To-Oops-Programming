/* 11.Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area */

#include <iostream>
using namespace std;

double Area(double length, double breadth) {
    return length * breadth;
}

double Area(int base, int height) {
    return 0.5 * base * height;
}

double Area(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    cout << "\n\t Rectangle :\n";
    int length = 20, breadth = 10;
    cout << "\n\t Area of Rectangle: " << Area(length, breadth) << endl;

    cout << "\n\n\t Triangle :\n";
    double base = 10, height = 20;
    cout << "\n\t Area of Triangle: " << Area(base, height) << endl;

    cout << "\n\n\t Circle :\n";
    double radius = 5;
    cout << "\n\t Area of Circle: " << Area(radius) << endl;
}

