#ifndef EX_BLOB
#define EX_BLOB
#include <string>
#include <vector>
#include <memory>
#include <stdexcept>
class StrBlobPtr;
class StrBlob{
public:
	typedef std::vector<std::string>::size_type size_type;
	friend class StrBlobPtr;
	StrBlob();
	StrBlob(std::initializer_list<std::string> il);
public:
	//method
	size_type size() const{return data->size();}
	bool empty()const{return data->empty();}
	//add and remove element
	void push_back(const std::string &t){data->push_back(t);}
	void pop_back();
	//element access;
	std::string& front();
	std::string& back(); 
private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i,const std::string &msg)const;
};
StrBlob::StrBlob():data(std::make_shared<std::vector<std::string>>()){};

StrBlob::StrBlob(std::initializer_list<std::string> il):data(std::make_shared<std::vector<std::string>>(il)){}
void StrBlob::check(size_type i,const std::string &msg)const {
	if(i>=data->size())
		throw std::out_of_range(msg);
}
std::string& StrBlob::front(){
	check(0,"front on empty strblob");
	return data->front();
}
std::string& StrBlob::back(){
	check(0,"back on empty strblob");
	return data->back();
}
void StrBlob::pop_back(){
	check(0,"pop_back on empty strblob");
	data->pop_back();
}

/*
another class 
*/
class StrBlobPtr {
public:
    StrBlobPtr():curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz = 0):wptr(a.data), curr(sz) { }
    bool operator!=(const StrBlobPtr& p) {return p.curr != curr; }
    std::string& deref() const {
        auto p = check(curr, "dereference past end");
        return (*p)[curr];
    }
    StrBlobPtr& incr() {
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }

private:
    std::shared_ptr<std::vector<std::string>> check(size_t i, const std::string &msg) const {
        auto ret = wptr.lock();
        if (!ret) throw std::runtime_error("unbound StrBlobPtr");
        if (i >= ret->size()) throw std::out_of_range(msg);
        return ret;
    }
    std::weak_ptr<std::vector<std::string>> wptr;
    size_t curr;
};
#endif
