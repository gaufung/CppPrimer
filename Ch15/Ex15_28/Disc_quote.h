#ifndef DISC_QUOTE
#define DISC_QUOTE
#include "Quote.h"
class Disc_quote : public Quote
{
public:
	Disc_quote() = default;
	Disc_quote(const std::string& book,double priece,std::size_t qty,double disc):
		Quote(book,price),quanity(qty),discount(disc){}
	double net_price(std::size_t)const = 0;
protected:
	std::size_t quanity=0;
	double discount=0.0;
};
#endif