#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {

public:
    Rectangle();
    void setDimensions(double newLength, double newWidth);
    double getLength() const;
    double getWidth() const;
    double getArea() const;

private:
    double length;
    double width;

};

#endif //RECTANGLE_H
