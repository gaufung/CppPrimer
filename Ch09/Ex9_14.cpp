#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main(){
	list<const char*> cList={"gau","fung"};
	vector<string> sVector(cList.begin(),cList.end());
	for(auto& s:sVector)
		cout<<s<<" ";
	return 0;
}