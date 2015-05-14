#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isShort(const string& s1,const string& s2){
	return s1.size()<s2.size();
}
int main()
{
	vector<string> strV;
	string word;
	while(cin>>word) {
	    strV.push_back(word);
	}
	stable_sort(strV.begin(),strV.end(),isShort);
	auto end_unique=unique(strV.begin(),strV.end());
	strV.erase(end_unique,strV.end());
	for(auto& val:strV)
		cout<<val<<" ";
	return 0;
		

}