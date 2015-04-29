#include <iostream>
using namespace std;
int main(){
	int i=0;
	//double *dp=&i;// error: cannot convert from 'int *' to 'double *'
	//int *ip=i;// error:cannot convert from 'int' to 'int *'
	int *p=&i;
	return 0;
}