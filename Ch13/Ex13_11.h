#ifndef Ex_13_11
#define Ex_13_11
#include <string>
class HasPtr{
public:
	HasPtr(const std::string &s=std::string()):ps(new std::string(s)),i(0){}
	HasPtr(const HasPtr&);
	HasPtr& operator=(const HasPtr&);
	~HasPtr(){free();}
private:
	void free();
	std::string *ps;
	int i;
};
HasPtr::HasPtr(const HasPtr& hp){
	ps=new std::string(*hp.ps);
	i=hp.i;
}
HasPtr& HasPtr::operator=(const HasPtr& hp){
	ps=new std::string(*hp.ps);
	i=hp.i;
	return *this;
}
void HasPtr::free(){
	delete ps;
}
#endif