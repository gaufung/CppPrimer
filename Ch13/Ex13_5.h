#ifndef EX_13_5
#define EX_13_5
#include <string>
class HasPtr{
public:
	HasPtr(const std::string &s=std::string()):ps(new std::string(s)),i(0){}
	HasPtr(const HasPtr&);
private:
	std::string *ps;
	int i;
};
HasPtr::HasPtr(const HasPtr& hp){
	ps=new std::string(*hp.ps);
	i=hp.i;
}
#endif