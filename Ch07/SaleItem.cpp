#include <iostream>
#include <string>
#include "SaleItem.h"
using namespace std;
void waitUserQuit(){
	string waitInfo;
	cin>>waitInfo;
}
int main(){
	SaleItem item1(cin);
	print(cout,item1);
	string isbn="gaufung";
	SaleItem item2(isbn,2,4.2);
	print(cout,item2);
	SaleItem item3(isbn,3,1.2);
	print(cout,item3);
	item2.combine(item3);
	print(cout,item2);
	waitUserQuit();
	return 0;
}
