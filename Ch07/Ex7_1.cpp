#include <iostream>
#include <string>
#include "SalesData.h"
using namespace std;

Sales_data::Sales_data(istream& cin){
	cout<<"Input the isbn number of the book:"<<endl;
	cin>>bookNo;
	cout<<"Input the number of the count of the book sold:"<<endl;
	cin>>units_sold;
	cout<<"Input the price of the each book:"<<endl;
	double priece;
	cin>>priece;
	revenue=priece*units_sold;
}

Sales_data& Sales_data::combine(const Sales_data& salesData){
	this->units_sold+=salesData.units_sold;
	this->revenue+=salesData.revenue;
	return *this;
}
void waitUserEntertoQuit(){
	string vaule;
	cin>>vaule;
}
int main(){
	Sales_data salesData(cin);
	cout<<salesData.isbn()<<endl;
	waitUserEntertoQuit();
	return 0;
}

