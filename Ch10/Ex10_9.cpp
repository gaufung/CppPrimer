#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int> v;
	int val;
	while(cin>>val) {
	    v.push_back(val);
	}
	sort(v.begin(),v.end());
	auto end_unique=unique(v.begin(),v.end());
	v.erase(end_unique,v.end());
	for(auto& val:v)
		cout<<val<<" ";
	return 0;
}