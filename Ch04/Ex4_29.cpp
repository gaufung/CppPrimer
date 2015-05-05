#include <iostream>
using namespace std;
int main(){
	int x[10];
	int *p=x;
	char *cp;
	bool* pBool; 
	cout<<sizeof(x)/sizeof(*x)<<endl;
	cout<<sizeof(p)/sizeof(*p)<<endl;
	cout<<sizeof(cp)<<endl;
	cout<<sizeof(pBool)<<endl;
}