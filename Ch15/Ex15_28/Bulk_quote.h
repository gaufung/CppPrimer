#ifndef BULK_QUOTE
#define BULK_QUOTE
#include "Disc_quote.h"
class Bulk_quote : public Disc_quote
{
public:
	Bulk_quote()=default;
	Bulk_quote(const std::string& book,double price,std::size_t qty,double disc):
		Disc_quote(book,price,qty,disc){}
	//override
	double net_price(std::size_t)const override;
};
double Bulk_quote::net_price(std::size_t n)const{
	if(n>quanity)
		return n*(1 - discount)*price;
	else
		return n*price;
}
#endif