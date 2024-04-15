#include "Point.h"
#include "Shape.h"

#pragma once
class Triangle : public Shape {

private:
	Point vertex1;
	Point vertex2;
	Point vertex3;

public:
	Triangle(const Point& v1, const Point& v2, const Point& v3) : vertex1(v1), vertex2(v2), vertex3(v3) {}

	//Heron's formula used
	//Area of triangle ABC = (1/2) | [x1 (y2 - y3) + x2 (y3 - y1) + x3 (y1 - y2)] |

	virtual double calculateArea() const override {
		double sum = 0.0;
		sum += vertex1.getX() * (vertex2.getY() - vertex3.getY());
		sum += vertex2.getX() * (vertex3.getY() - vertex1.getY());
		sum += vertex3.getX() * (vertex1.getY() - vertex2.getY());
		std::cout << "sum: " << sum;
		
		return 1.0/2.0 * (sum);
	}
};

