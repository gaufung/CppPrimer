#ifndef EX7_9	
#define EX7_9	
#include <iostream>
#include <string>
class Person
{
public:
	std::string name;
	std::string address;
	public:
	std::string getName()const {return name;}
	std::string getAddress()const {return address;}		
};
std::istream& read(std::istream& in,Person& person){
	in>>person.name>>person.address;
	return in;
}
std::ostream& print(std::ostream& os,const Person& person){
	os<<"Name: "<<person.name<<std::endl<<"Address: "<<person.address;
	return os;
}
#endif