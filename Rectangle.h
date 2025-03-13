#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"

class Rectangle {
  private: 
    Point topLeft;
    double width, height;

  public:
    Rectangle(Point p);
    Rectangle(Point p, double w, double h);
    void set_width(double w);
    void set_height(double h);
    double get_width();
    double get_height();
    void set_values (double, double);
    double area();
    double perimeter();
};
#endif