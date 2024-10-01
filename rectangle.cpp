# include "rectangle.h"

Rectangle::Rectangle() : length(1.0), width(1.0) {}

void Rectangle::setDimensions(double newLength, double newWidth) {
    if (newLength > 0.0 && newWidth > 0.0) {
        length = newLength;
        width = newWidth;
    }
}

doule Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getArea() const {
    return length * width;
}