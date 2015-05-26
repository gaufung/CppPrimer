#include <regex>
#include <string>
#include <iostream>
using namespace std;
int main(){
	string pattern("[^c]ei");
	pattern="[a-zA-Z0-9_]*" + pattern + "[a-zA-Z0-9_]*";
	regex r(pattern);
	smatch results;
	string test_str="receipt friend theif receive";
	if(regex_search(test_str,results,r))
		cout<<results.str()<<endl;
	return 0;
}