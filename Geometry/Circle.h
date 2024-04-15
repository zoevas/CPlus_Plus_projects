#pragma once
#include "Shape.h"
#include "Point.h"

class Circle :
    public Shape {

private:
    Point center;
    double radius;

public:
    Circle(Point& p, double r) : center(p), radius(r) {}
    virtual double calculateArea() const override {
        return 3.14159 * radius * radius;
    }

    //check if a point is inside a circle
    bool isInside(const Point& p) {
        double dx = p.getX() - center.getX();
        double dy = p.getY() - center.getY();
        return (dx * dx + dy * dy) <= (radius * radius);
    }

    friend std::ostream& operator<< (std::ostream& out, const Circle &c);

};
