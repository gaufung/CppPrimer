#ifndef EX_13_39
#define EX_13_39
#include <string>
#include <memory>
#include <utility>
#include <iostream>
class StrVec{
public:
	StrVec():
		element(nullptr),first_free(nullptr),cap(nullptr){}
	StrVec(const StrVec&);
	StrVec(std::initializer_list<std::string>);
	StrVec(StrVec&&) noexcept;
	StrVec &operator=(const StrVec&);
	StrVec &operator=(StrVec&&)noexcept;
	~StrVec();
	void push_back(const std::string&);
	size_t size() const{return first_free - element;}
	size_t capacity() const {return cap - element;}
	std::string *begin() const{return element;}
	std::string *end() const{return first_free;}
	void alloc_n_move(size_t );
	void reserve(size_t);
	void resize(size_t,const std::string);
	void resize(size_t);
private:
	static std::allocator<std::string> alloc;
	void range_initialize(const std::string *, const std::string *);
	void check_n_alloc(){
		if(size()==capacity()) reallocate();
	}
	std::pair<std::string*,std::string*> alloc_n_copy
			(const std::string*,const std::string*);
	void free();
	void reallocate();
	std::string *element;
	std::string *first_free;
	std::string *cap;
};
void StrVec::push_back(const std::string& s){
	check_n_alloc();
	alloc.construct(first_free++,s);
}
std::pair<std::string*,std::string*>
StrVec::alloc_n_copy(const std::string *b,const std::string* e){
	auto data=alloc.allocate(e-b);
	return {data,uninitialized_copy(b,e,data)};
}
void StrVec::free(){
	if(element){
		for(auto p=first_free;p!=element;)
			alloc.destroy(--p);		
		alloc.deallocate(element,cap-element);
	}
}
StrVec::StrVec(const StrVec &s){
	auto newdata=alloc_n_copy(s.begin(),s.end());
	element=newdata.first;
	first_free=cap=newdata.second;
}
StrVec::StrVec(std::initializer_list<std::string> il){
	range_initialize(il.begin(),il.end());
}
void StrVec::range_initialize(const std::string *first, const std::string *last)
{
	auto newdata = alloc_n_copy(first, last);
	element = newdata.first;
	first_free = cap = newdata.second;
}
StrVec::~StrVec(){
	free();
}
StrVec& StrVec::operator=(const StrVec& rhs){
	auto data=alloc_n_copy(rhs.begin(),rhs.end());
	free();
	element=data.first;
	first_free=data.second;
	return *this;
}
void StrVec::reallocate(){
	auto newcapacity=size()?2*size():1;
	auto newdata=alloc.allocate(newcapacity);
	auto dest=newdata;
	auto elem=element;
	for(size_t i=0;i!=size();++i)
		alloc.construct(dest++,std::move(*elem++));
	free();
	element=newdata;
	first_free=dest;
	cap=element+newcapacity;
}
void StrVec::alloc_n_move(size_t new_cap)
{
	auto newdata = alloc.allocate(new_cap);
	auto dest = newdata;
	auto elem = element;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();
	element = newdata;
	first_free = dest;
	cap = element + new_cap;
}
void StrVec::reserve(size_t new_cap)
{
	if (new_cap <= capacity()) return;
	alloc_n_move(new_cap);
}
void StrVec::resize(size_t count, const std::string s)
{
	if (count > size()) {
		if (count > capacity()) reserve(count * 2);
		for (size_t i = size(); i != count; ++i)
			alloc.construct(first_free++, s);
	}
	else if (count < size()) {
		while (first_free != element + count)
			alloc.destroy(--first_free);
	}
}
void StrVec::resize(size_t count)
{
	resize(count, std::string());
}
StrVec::StrVec(StrVec&& rsv) noexcept{
	std::cout<<"move construct";
	element=rsv.element;
	first_free=rsv.first_free;
	cap=rsv.cap;
	rsv.element=rsv.first_free=rsv.cap=nullptr;
}
StrVec& StrVec::operator=(StrVec&& s)noexcept{
	std::cout<<"move-assignment called";
	if (this != &s) {
		free();
		element = s.element;
		first_free = s.first_free;
		cap = s.cap;
		s.element = s.first_free = s.cap = nullptr;
	}
	return *this;
}
#endif