#ifndef CIRCLE
#define CIRCLE
#include "Shape.h"
class Circle : public Shape{
public:
	Circle(double x,double y,double rad){
		centerPoint.first=x;
		centerPoint.second=y;
		radius=rad;
	}
	Circle(cooridiate cp,double rad):centerPoint(cp),radius(rad){}
	double area() const override; 
	double perimeter() const override;
private:
	double radius;
	cooridiate centerPoint;
};
double Circle::area() const{
	return Pi * radius * radius;
}
double Circle::perimeter() const{
	return 2 * Pi * radius;
}
#endif