#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v(10,42);
	for(auto it=v.begin();it!=v.end();it++)
		*it*=2;
	return 0;
}