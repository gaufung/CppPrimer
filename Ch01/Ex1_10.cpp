#define _HAS_EXCEPTIONS 0
#include<iostream>
using namespace std;
int main(){
	int val=10;
	while(val>=0) {
	    cout<<val<<endl;
	    --val;
	}
	return 0;
}