#ifndef RETANGLE
#define RETANGLE
#include "Shape.h"
class Retangle : public Shape
{
public:
	Retangle(double xleft,double yButtom,double wid,double hei){
		leftButtom.first = xleft;
		leftButtom.second = yButtom;
		width = wid;
		height = hei;
	}
	double area() const override;
	double perimeter() const override;
	~Retangle();
private:
	cooridiate leftButtom;
	double width;
	double height;
};
double Retangle::area() const{
	return width * height;
}
double Retangle::perimeter() const{
	return 2 * ( width + height);
}
#endif