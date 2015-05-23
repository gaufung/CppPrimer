#ifndef EX_15_13
#define EX_15_13
#include <string>
#include <iostream>
using std::ostream;
class base{
public:
	base()=default;
	base(std::string& b):baseName(b){}
	std::string name(){return baseName;}
	virtual void print(ostream &os){os<<baseName;}
private:
	std::string baseName;
};
class derived: public base{
public:
	derived():base(){}
	derived(std::string n,int in):base(n),i(in){}
	void print(ostream &os) override {
		base::print(os);
		os<<" "<<i;
	}
private:
	int i;
};
#endif