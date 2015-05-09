#ifndef EX7_6	
#define EX7_6	
#include <iostream>
#include <string>
class Sales_data{	
	friend Sales_data add(const Sales_data&,const Sales_data&);
	friend std::istream &read(std::istream,Sales_data&);
	friend std::ostream &print(std::ostream,sales_data&);
public:
	Sales_data()=default;
	Sales_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p*n){}
	Sales_data(const std::string &s):bookNo(s){}
	Sales_data(std::istream&);
	std::string isbn() const{return bookNo;}
	Sales_data& combine(const Sales_data&);
private:
	double avg_price()const{return units_sold ? revenue/units_sold:0;}
	std::string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};

Sales_data add(const Sales_data& sales1,const Sales_data& sales2){
	std::string number=sales1.isbn();
	unsigned numSold=sales1.units_sold+sales2.units_sold;
	double revenue=sales1.revenue+sales2.revenue;
	Sales_data sale(number,numSold,revenue/numSold);
	return sale;
}
std::istream &read(std::istream in,Sales_data& sale){
	double priece;
	in>>sale.bookNo>>sale.units_sold>priece;
	sale.revenue=priece*sale.units_sold;
	return in;

}
std::ostream &print(std::ostream out,sales_data& sale){
	out<<sale.isbn()<<" "<<sale.units_sold<<" "<<sale.revenue<<" "<<sale.avg_price()<<std::endl;
	return out;
}

#endif