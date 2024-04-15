#include "Circle.h"

std::ostream& operator<< (std::ostream& out, const Circle& circle)
{
    // Since operator<< is a friend of the Point class, we can access Point's members directly.
    out << "\nCircle calculated area is: " << circle.calculateArea() << "\n";

    return out; // return std::ostream so we can chain calls to operator<<
}