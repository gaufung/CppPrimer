#ifndef EX7_15
#define EX7_15
#include <string>
class Person{
public:
	std::string name;
	std::string address;
public:
	Person()=default;
	Person(const std::string n,const std::string a ):name(n),address(a){}	
	std::string getName() const{return name;}
	std::string getAddress() const{return address;}

};
#endif