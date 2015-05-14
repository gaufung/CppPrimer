#include <utility>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main(){
	string word;
	int ival;
	vector<pair<string,int>> vp;
	while(cin>>word>>ival) {
	    vp.push_back(make_pair(word,ival));
	}
	for(auto& p:vp)
		cout<<p.first<<" "<<p.second<<endl;
	return 0;
}