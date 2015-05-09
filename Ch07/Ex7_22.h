#ifndef EX7_22	
#define EX7_22	
#include <string>
class Person{
	friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &print(std::ostream &os, const Person &person);
private:
	std::string name;
	std::string address;
public:
	Person()=default;
	Person(const std::string n,const std::string a ):name(n),address(a){}	
	std::string getName() const{return name;}
	std::string getAddress() const{return address;}
};
std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}
std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}

/*


std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}
*/
#endif