#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool LongerThan5Character(const string& s){
	return s.size()>5?true:false;
}
int main(){
	vector<string> strV={"gau","fung","gaofengcumt"};
	auto iter=partition(strV.begin(),strV.end(),LongerThan5Character);
	for(auto it=strV.begin();it!=iter;++it)
		cout<<*it<<" ";
	return 0;
}