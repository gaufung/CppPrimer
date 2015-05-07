#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool findWordExist(vector<string>& v,string& word){
	auto it=v.begin();
	while(it!=v.end()) {
	    if(*it==word) return true;
	    it++;
	}
	return false;
}
int main(){
	vector<string> v;
	string word;
	while(true) {
	    cin>>word;
	    if(findWordExist(v,word))
	    	break;
	    v.push_back(word);
	}
	cout<<word<<endl;
}