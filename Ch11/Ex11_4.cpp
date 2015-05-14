#include <map>
#include <string>
#include <iostream>
using namespace std;
void covert2SameWord(string& word){
	for(auto& ch:word){
		if(isupper(ch))ch=tolower(ch);
	}
	if(ispunct(word.size()-1)){
		word.erase(word.size()-1,1);
	}
}
int main(){
	map<string,size_t> word_count;
	string word;
	while(cin>>word) {
		covert2SameWord(word);
	    ++word_count[word];
	}
	for(auto& w:word_count)
		cout<<w.first<<" occurs"<<w.second<<(w.second>1?"times":"time")<<endl;
	return 0;
}