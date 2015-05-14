#include <iostream>
#include <list>
#include <string>
using namespace std;
int main(){
	list<string> il{"gau","fung","cumt","fung"};
	il.sort();
	il.unique();
	for(auto& val:il)
		cout<<val<<" ";
	return 0;
}