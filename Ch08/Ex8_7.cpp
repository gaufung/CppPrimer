#include <fstream>
#include <iostream>
#include "SaleItem.h"
int main(){
	SaleItem item;
	read(std::cin,item);
	std::ofstream ofs("outSalaItem.txt");
	print(ofs,item);
	return 0;
}