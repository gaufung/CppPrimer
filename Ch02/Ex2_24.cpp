#include <iostream>
using namespace std;
int main(){
	int i=42;
	void *p=&i;
	//long *ip=&i;//error:cannot convert from 'int *' to 'long *'
	return 0;
}