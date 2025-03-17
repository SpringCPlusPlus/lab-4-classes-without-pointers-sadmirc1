#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "Point.h"

using namespace std;

Point::Point(double x, double y): x(x), y(y) {}
double Point::distanceTo(const Point& other) const {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}
void Point::print() const {
    cout << "Point at (" << x << ", " << y << ")" << endl;
}