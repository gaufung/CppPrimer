#include <iostream>
using namespace std;
int main(){
	int ival=1.01;
	//int &rval1=1.01; //error cannot convert from 'double' to 'int &'
	int &rval2=ival;
	//int &rval3;//references must be initialized
	return 0;
}