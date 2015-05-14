#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	vector<string> v;
	string word;
	while(cin>>word) {
	    if(find(v.begin(),v.end(),word)!=v.end()){
	    	v.push_back(word);
	    }
	}
	for(auto& val:v)
		cout<<val<<" ";
	return 0;
}