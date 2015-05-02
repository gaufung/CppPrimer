#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	vector<string> text;
	string word;
	while(!cin.eof()) {
		cin>>word;
	    for(auto &c:word)
	    	c=toupper(c);
	    text.push_back(word);
	}
	for(decltype(text.size()) index=0;index<text.size();index++){
		if (index%3==0)
		{
			cout<<endl;
			cout<<text[index]<<" ";
		}
		else{
			cout<<text[index]<<" ";
		}
	}
	cin>>word;
}