#include <iostream>
using namespace std;
int main(){
	int a=3,b=4;
	decltype(a) c=a;
	decltype(a=b) d=a;
	++c;
	++d;
	cout<<d<<endl;

	return 0;
}