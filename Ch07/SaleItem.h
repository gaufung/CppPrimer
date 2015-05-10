#ifndef SALA_ITEM
#define SALA_ITEM
#include <string>
#include <iostream>
class SaleItem{
	friend SaleItem add(const SaleItem&,const SaleItem&);
	friend std::istream &read(std::istream&, SaleItem&);
	friend std::ostream &print(std::ostream&,const SaleItem&);
	public:
		//constructor
		SaleItem()=default;
		SaleItem(std::string &s,unsigned n,double p):
			bookNo(s),unit_sold(n),revenue(p*n){}
		SaleItem(std::string &s):bookNo(s){}
		SaleItem(std::istream &);
	public:
		//method
		inline
		std::string isbn()const{return bookNo;}
		SaleItem &combine(const SaleItem &);
		inline
		double avg_priece()const{return revenue/unit_sold;}
	private:
		std::string bookNo;
		unsigned unit_sold=0;
		double revenue=0.0;
};
SaleItem::SaleItem(std::istream &in){
	double priece;
	in>>bookNo>>unit_sold>>priece;
	revenue=priece*unit_sold;
}
SaleItem& SaleItem::combine(const SaleItem& item){
	unit_sold+=item.unit_sold;
	revenue+=item.revenue;
	return *this;
}
SaleItem add(const SaleItem& item1,const SaleItem& item2){
	SaleItem item;
	item.combine(item1);
	item.combine(item2);
	return item;
}
std::istream &read(std::istream& in, SaleItem& item){
	double priece;
	in>>item.bookNo>>item.unit_sold>>priece;
	item.revenue=item.unit_sold*priece;
	return in;
}
std::ostream &print(std::ostream& out,const SaleItem& item){
	out<<item.bookNo<<" "<<item.unit_sold<<" "<<item.revenue<<std::endl;
	return out;
}
#endif