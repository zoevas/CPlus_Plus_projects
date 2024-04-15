#pragma once
//It is an abstract class and cannot be instantiated
class Shape{
public:
	//this is a pure virtual function
	virtual double calculateArea() const = 0;

	//ensure proper clean up of derived classes
	virtual ~Shape() {};
};

