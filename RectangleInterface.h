#ifndef RECTANGLEINTERFACE_H
#define RECTANGLEINTERFACE_H

/** @file RectangleInterface.h */

/** Interface class for a Rectangle, defining the contract
 *  for setting dimensions and retrieving properties like
 *  length, width, and area. */

class RectangleInterface {
public:
    /** Updates the dimensions of this Rectangle.
     *  @param newLength The new length for this Rectangle.
     *  @param newWidth The new width for this Rectangle.
     *  @pre newLength and newWidth must be greater than zero.
     *  @post If both values are valid, the length and width
     *        of this object are set to the provided values.
     *        Otherwise, the Rectangle remains unchanged.
     *  @return True if the dimensions are updated, false otherwise. */
    virtual void setDimensions(double newLength, double newWidth) = 0;

    /** Retrieves the length of this Rectangle.
     *  @return The current length of this Rectangle. */
    virtual double getLength() const = 0;

    /** Retrieves the width of this Rectangle.
     *  @return The current width of this Rectangle. */
    virtual double getWidth() const = 0;

    /** Computes the area of this Rectangle.
     *  @return The area of the Rectangle (length * width). */
    virtual double getArea() const = 0;

    /** Destroys this Rectangle and frees its assigned memory. */
    virtual ~RectangleInterface() {}
};

#endif // RECTANGLEINTERFACE_H
