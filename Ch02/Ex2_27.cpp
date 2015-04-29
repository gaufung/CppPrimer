#include <iostream>
using namespace std;
int main(){
	//int i=-1, &r=0;//error cannot convert from 'int' to 'int &'
	int i2=5;
	const int i=-1,&r=0;
	int *const p3=&i2;
	const int &const r2=i2;//warning 
	cout<<r2<<endl;
	return 0;
}