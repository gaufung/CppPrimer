#ifndef QUOTE
#define QUOTE
#include <string>
#include <iostream>
class Quote{
public:
	Quote()=default;
	Quote(const std::string& book,double sales_price):
		bookNo(book),price(sales_price){}
	std::string isbn()const{return bookNo;}
	virtual double net_price(std::size_t n)const{return n*price;}
	virtual ~Quote()=default;
protected:
	double price=0.0;
private:
	std::string bookNo;
};
void print_total(std::ostream& os,Quote& item,std::size_t n){
	auto np=item.net_price(n);
	os<<"ISBN: "<<item.isbn()<<" sold "<<n<<" total due "<<np;
}
#endif
