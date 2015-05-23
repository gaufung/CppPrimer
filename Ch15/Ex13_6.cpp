#include "Ex15_5.h"
#include <iostream>
using namespace std;
int main(){
	Quote item1("gaufung",10);
	Bulk_quote item2("cumt",10,5,0.4);
	print_total(cout,item2,10);
	return 0;
}