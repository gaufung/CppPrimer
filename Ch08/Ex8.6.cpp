#include <fstream>
#include <iostream>
#include "SaleItem.h"
int main(){
	
	std::ifstream ifs("inSalaItem.txt");
	SaleItem saleTotal;
	if(read(ifs,saleTotal))
	{
		SaleItem saleTrans;
		while(read(ifs,saleTrans)) 
		{
		    if(saleTotal.isbn()==saleTrans.isbn())
		    {
		    	saleTotal.combine(saleTrans);
		    }
		    else
		    {
		    	print(std::cout,saleTotal)<<std::endl;
		    	saleTotal=saleTrans;
		    }
		}
	}
	else
	{
		std::cerr<<"no data"<<std::endl;
	}
	return 0;
	
}