#ifndef EX13_22
#define EX13_22
#include <string>
class HasPtr{
public:
	HasPtr(const std::string &s=std::string()):ps(new std::string(s)),i(0){}
	HasPtr(const HasPtr&);
	HasPtr& operator = (const HasPtr&);
	~HasPtr(){delete ps;}
private:
	std::string *ps;
	int i;
};
HasPtr::HasPtr(const HasPtr& hp){
	ps=new std::string(*hp.ps);
	i=hp.i;
}
HasPtr& HasPtr::operator=(const HasPtr& hp){
	auto newp=new std::string(*hp.ps);
	delete ps;
	ps=newp;
	i=hp.i;
	return *this;
}
#endif