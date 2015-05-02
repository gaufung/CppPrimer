#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v(10,42);
	for(auto it=v.cbegin();it!=v.end();it++)
		cout<<*it<<" ";
	return 0;
}