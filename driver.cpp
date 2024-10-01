#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    Circle theCircle;
    Rectangle theRectangle;

    // Test Circle
    cout << "Initial state of the circle" << endl;
    cout << "    radius = " << theCircle.getRadius() << endl;
    cout << "    area   = " << theCircle.getArea() << endl << endl;

    theCircle.setRadius(2.0);
    cout << "Current state of the circle" << endl;
    cout << "    radius = " << theCircle.getRadius() << endl;
    cout << "    area   = " << theCircle.getArea() << endl << endl;

    // Test Rectangle
    cout << "Initial state of the rectangle" << endl;
    cout << "    length = " << theRectangle.getLength() << endl;
    cout << "    width  = " << theRectangle.getWidth() << endl;
    cout << "    area   = " << theRectangle.getArea() << endl << endl;

    theRectangle.setLength(4.0);
    theRectangle.setWidth(5.0);
    cout << "Current state of the rectangle" << endl;
    cout << "    length = " << theRectangle.getLength() << endl;
    cout << "    width  = " << theRectangle.getWidth() << endl;
    cout << "    area   = " << theRectangle.getArea() << endl << endl;

    return 0;
}
