#include "Point.h"
#include "Triangle.h"
#include "Circle.h"

int main() {

	Point v1(5.0, 3.0);
	Point v2(0.0, 10.0);
	Point v3(1.0, -1.0);

	Triangle  t = Triangle(v1, v2, v3);

	//we expect area to be 24 sq.units
	std::cout << "\nTriangle: " << t.calculateArea();

	Circle c = Circle(v1, 2.0);

	std::cout << c;

	//given a triangle with its vertices and a circle with a center and a radius, find the overlapping area
	//https://www.phatcode.net/articles.php?id=459

	

}