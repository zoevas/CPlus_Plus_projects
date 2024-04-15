#pragma once
#include <iostream>
#include <cmath>

class Point {
private:
	double x;
	double y;

public:
	Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

	double getX() const { return x; }

	double getY() const { return y; }
};

