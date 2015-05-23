#ifndef SALES_DATA
#define SALES_DATA
#include <iostream>
#include <string>
class Sales_data{
	friend std::ostream &operator<<(std::ostream &,const Sales_data& );
	friend std::istream &operator>>(std::istream &, Sales_data& );
	friend Sales_data add(const Sales_data&,const Sales_data&);
public:
	Sales_data()=default;
	Sales_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p*n){}
	Sales_data(const std::string &s):bookNo(s){}
	Sales_data(const Sales_data&);
	Sales_data(std::istream& in){in>>*this;};
	std::string isbn() const{return bookNo;}
	Sales_data& combine(const Sales_data& item){return *this+=item;};
	Sales_data& operator+=(const Sales_data &);
	Sales_data& operator=(const Sales_data &);
	bool operator==(const Sales_data&);
	bool operator!=(const Sales_data&);
	Sales_data& operator=(const std::string&);
private:
	double avg_price()const{return units_sold ? revenue/units_sold:0;}
	std::string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};
Sales_data::Sales_data(const Sales_data& item){
	bookNo=item.bookNo;
	units_sold=item.units_sold;
	revenue=item.revenue;
}
Sales_data& Sales_data::operator=(const Sales_data& item){
	bookNo=item.bookNo;
	units_sold=item.units_sold;
	revenue=item.revenue;
	return *this;
}
std::ostream &operator<<(std::ostream &os,const Sales_data& item){
	    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
		return os;
} 
std::istream &operator>>(std::istream &is,Sales_data& item){
	double price;
	is>>item.bookNo>>item.units_sold>>price;
	if(is)
		item.revenue=item.units_sold*price;
	else
		item=Sales_data();
	return is;
}
Sales_data add(const Sales_data& item1,const Sales_data& item2){
	Sales_data item(item1);
	item+=item2;
	return item;
}
Sales_data& Sales_data::operator+=(const Sales_data& item){
	units_sold+=item.units_sold;
	revenue+=item.revenue;
	return *this;
}
bool Sales_data::operator==(const Sales_data& item){
	return bookNo==item.isbn();
}
bool Sales_data::operator!=(const Sales_data& item){
	return bookNo!=item.isbn();
}
Sales_data& Sales_data::operator=(const std::string &isbn)
{
    *this = Sales_data(isbn);
    return *this;
}
#endif