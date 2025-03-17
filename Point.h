#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath> // For sqrt() and pow()

using namespace std;

// Point Class Declaration
class Point {

    double x;
    double y;

  public:
    // Constructor
    Point(double xCoord, double yCoord);

    // Member function to calculate distance to another Point
    double distanceTo(const Point& other) const;

    //Member function to print the point.
    void print() const;

    double get_xCoord() {return x;}
    double get_yCoord() {return y;}
};
#endif