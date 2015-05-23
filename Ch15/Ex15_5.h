#ifndef EX_15_5
#define EX_15_5
#include "Ex15_3.h"
#include <string>
class Bulk_quote:public Quote{
public:
	Bulk_quote()=default;
	Bulk_quote(const std::string&,double,std::size_t,double);
	double net_price(std::size_t)const override;
private:
	std::size_t min_qty=0;
	double discount=0.0; 
};
Bulk_quote::Bulk_quote(const std::string& book,double sales_price,size_t mq,double dis):
	Quote(book,sales_price),min_qty(mq),discount(dis){}
double Bulk_quote::net_price(std::size_t n)const {
	if(n>=min_qty)
		return n*(1 - discount)*price;
	else
		return n*price;
}
#endif