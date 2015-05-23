#ifndef LIMIT_QUOTE
#define LIMIT_QUOTE
#include "Disc_quote.h"
class Limit_quote : public Disc_quote
{
public:
	Limit_quote()=default;
	Limit_quote(const std::string& book,double price,
		std::size_t qty,double disc,std::size_t lq):
		Disc_quote(book,price,qty,disc),limit_quanity(lq){}
	double net_price(const std::size_t)const override;

private:
	std::size_t limit_quanity;
};
double Limit_quote::net_price(const std::size_t n) const{
	if(n>=quanity&&n<=limit_quanity)
		return n*(1 - discount)*price;
	if(n>limit_quanity)
		return limit_quanity*(1 - discount)*price + (n - limit_quanity)*price;
	else
		return n * price;
}
#endif