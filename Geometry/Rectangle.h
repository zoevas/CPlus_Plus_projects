#pragma once
#include "Shape.h"
#include "Point.h"

class Rectangle :
    public Shape {

private:
    Point topleft;
    double length;
    double width;
public:
    Rectangle(const Point& t1, double l, double w) : topleft(t1), length(l), width(w) {}
    virtual double calculateArea() const override {
        return length * width;
    }



};

