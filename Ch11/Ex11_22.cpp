#include <utility>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
void addElement2Map(map<string,vector<int>>& m,const string s,vector<int> v){
	auto ret=m.insert({s,v});
	if(!ret.second)
		for(auto ival:v)
			(ret.first->second).push_back(ival);
}
int main(){
	map<string,vector<int>> m={{"gao",{1,2,3}}};
	vector<int> v={1,2,3,4};
	addElement2Map(m,"gao",v);
	for(auto& p:m){
		cout<<p.first<<" ";
		for(auto& ival:p.second)
			cout<<ival<<" ";
	}
		
	return 0;
}