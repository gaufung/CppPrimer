#ifndef EX13_18
#define EX13_18
#include <string>
class Employee{
public:
	Employee();
	Employee(std::string &);
	Employee& operator=(const Employee&)=delete;
	Employee(const Employee&)=delete;
	const int id() const { return id_; }
private:
	int id_;
	static int s_id;
	std::string name;
};
#endif