#include <iostream>
using namespace std;
int main(){
	int i=0,&r1=i;
	double d=0,&r2=d;
	//a
	r2=3.14159;
	//b
	r2=r1;
	//c
	i=r2;
	//d
	r2=d;
	return 0;
}