#include <iostream>
using namespace std;
int main(){
	const int i=42;
	auto j=i;
	const auto &k=i;
	auto *p=&i;//(*p) is pointer point to const variable;
	const auto j2=i,&k2=i;

	return 0;
}