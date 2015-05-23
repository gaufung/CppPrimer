#ifndef SHAPE
#define SHAPE
#include <utility>
#define Pi 3.1415916
typedef std::pair<double,double> cooridiate;
class Shape{
public:
	virtual double area() const = 0;
	virtual double perimeter() const = 0;
};
#endif