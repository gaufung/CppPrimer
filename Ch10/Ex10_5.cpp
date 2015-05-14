#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v;
	fill_n(back_inserter(v),10,0);
	for(auto& val:v)
		cout<<val<<" ";
	return 0;
}