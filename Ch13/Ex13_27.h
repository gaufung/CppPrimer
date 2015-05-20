#ifndef EX13_27
#define EX13_27
#include <string>
class HasPtr{
public:
	HasPtr(const std::string& s=std::string()):ps(new std::string(s)),i(0),use(new std::size_t(1)){}
	HasPtr(const HasPtr& p):ps(p.ps),i(p.i),use(p.use){++*use;}
	HasPtr& operator=(const HasPtr&);
	~HasPtr();
private:
	std::string *ps;
	int i;
	std::size_t* use;
};
HasPtr& HasPtr::operator=(const HasPtr& p){
	++*p.use;
	if(--*use==0){
		delete ps;
		delete use;
	}
	ps=p.ps;
	i=p.i;
	use=p.use;
	return *this;
}
HasPtr::~HasPtr(){
	if(--*use==0){
		delete ps;
		delete use;
	}
}
#endif