#include <utility>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main(){
	map<string,size_t> word_count;
	string word;
	while(cin>>word) {
	    auto ret=word_count.insert({word,1});
	    if(!ret.second)
	    	++ret.first->second;
	}
	for(auto& p:word_count)
		cout<<p.first<<" "<<p.second<<" ";
	return 0;
}