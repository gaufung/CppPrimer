#include <string>
#include <iostream>
class HasPtr{
	friend void swap(HasPtr&,HasPtr&);
public:
	HasPtr(const std::string &s=std::string()):ps(new std::string(s)),i(0){}
	HasPtr(const std::string &s=std::string(),int ival=0):ps(new std::string(s)),i(ival){}
	HasPtr(const HasPtr&);
	HasPtr& operator=(const HasPtr&);
	std::string getPs()const{return *ps;}
	int getI()const{return i;}
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
inline 
void swap(HasPtr& lhp,HasPtr& rhp){
	using std::swap;
	swap(lhp.ps,rhp.ps);
	swap(lhp.i,lhp.i);
}
int main(){
	std::string name="gaufung";
	HasPtr hp1(name,1);
	std::string school="cumt";
	HasPtr hp2(school,2);
	std::cout<hp1.getPs()<<std::endl;
	swap(hp1,hp2);
	std::cout<<hp1.getPs()<<std::endl;
	return 0;
}