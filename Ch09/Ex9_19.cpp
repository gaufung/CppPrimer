#include <iostream>
#include <string>
#include <list>
using namespace std;
int main(){
	list<string> input;
	string buff;
	while(cin>>buff) {
	    input.push_back(buff);
	}
	for(auto& v:input)
		cout<<v<<" ";
	return 0;
}